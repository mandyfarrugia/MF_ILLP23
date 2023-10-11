#define _CRT_SECURE_NO_WARNINGS //To disable the annoying Visual Studio compiler error when attempting to use scanf() since the function is deemed dangerous to use.

#include <stdio.h> //Since we will be using printf() and scanf().
#include <stdlib.h> //Since we will be using malloc(), realloc(), and free().

/* For dynamic arrays, we cannot use sizeof(dynamicArrayOfIntegers) / sizeof(dynamicArrayOfIntegers[0]) to check how elements there are in the array.
 * This is because the wrong output will be produced in the case of dynamic arrays. 
 * The best workaround would be to use constants or a variable storing the current number of elements.
 * The latter is applicable in case we change the size of the array. */
#define TOTAL_ELEMENTS 5

int main(void) {
	/* Using dynamic memory to create an array which stores five integers. */
	int* dynamicArrayOfIntegers = (int*)malloc(TOTAL_ELEMENTS * sizeof(int)); //Use (int*) to convert the void pointer to a pointer to integer - this is known as typecasting.

	if (dynamicArrayOfIntegers != NULL) {
		int check = 0; //The check variable is used to take note of how many inputs were successfully captured by scanf(), since there are cases where scanf() can be used to capture multiple inputs simultaneously.
		char c; //Used to clear/flush the buffer.

		for (int index = 0; index < TOTAL_ELEMENTS; index++) {
			/* A while/do-while loop is used when we are unsure as to how many times the loop should repeat. 
			 * Said loop is typically useful when we want the user to keep on trying until they enter the correct data.
			 * In the case, the loop will keep going until the user enters a correct number. 
			 * If the user attempts to enter a letter instead of numeric data, then the buffer will be flushed and the user will be prompted to try again. */
			do {
				printf("Enter an element at position %d: ", index);
				/* Use the check variable to keep track of how many successful inputs were captured by scanf(). 
				 * If scanf() returns 0, then it means that no valid inputs were captured. 
				 * Anything greater than or equal to one denotes how many inputs were successfully captured. */
				check = scanf("%d", &dynamicArrayOfIntegers[index]); //Enter a number from the keyboard and use the memory address of the first location of the array to store it in said first location.

				//If the user did not enter the correct data, flush the buffer and let the user know that input did not go through.
				if (check <= 0) {
					printf("Invalid format! Please try again!\n");
					while ((c = getchar()) != '\n' && c != EOF); //This is used to clear/flush the buffer.
				}
			} while (check <= 0);
		}
		
		/* We have to use an ampersand (&) for data types such as numeric types and char so that scanf() will be able to assign the value to the variable.
		 * If you forget the ampersand, Visual Studio will display an error or throw an exception.
		 * Example of such an exception is as follows:
		 * Exception thrown at 0x00007FFF4074CB96 (ucrtbased.dll) in DynamicArrays.exe: 
		 * 0xC0000005: Access violation writing location 0x00000000CDCDCDCD.
		 * However, you do not need to use the ampersand for strings (array of characters in C) since they are already memory addresses. */
		
		printf("\nData in the array dynamicArrayOfIntegers:\n");
		//Using another for-loop to view the contents of the array.
		for (int index = 0; index < TOTAL_ELEMENTS; index++) {
			printf("Element at position %d: %d\n", index, dynamicArrayOfIntegers[index]);
		}

		/* This demonstrates how to change the value of an array at a specific location. 
		 * This practice also applies to static arrays as well. 
		 * Make sure that when accessing by index that the index exists. 
		 * It should not be a negative index, nor one that goes beyond the bounds of the array. 
		 * In C# and Java, you will get an exception but since there are no exceptions in C, you will just get undefined behaviour. */
		dynamicArrayOfIntegers[0] = 3;

		printf("\nData in the modified array dynamicArrayOfIntegers:\n");
		for (int index = 0; index < TOTAL_ELEMENTS; index++) {
			printf("Element at position %d: %d\n", index, dynamicArrayOfIntegers[index]);
		}

		//realloc() is used when we want to grow or shrink our dynamic array.
		int doubleOriginalSize = TOTAL_ELEMENTS * 2;
		//Do not forget to use sizeof() even when using realloc() as you will run the risk of undefined behaviour!
		dynamicArrayOfIntegers = (int*)realloc(dynamicArrayOfIntegers, doubleOriginalSize * sizeof(int)); //Use realloc() to allow space for twice as much integers than we started with.
		
		//Do another NULL check to ensure that realloc() has worked well.
		if (dynamicArrayOfIntegers != NULL) {
			printf("Original array size: maximum of %d elements\nNew size: maximum of %d elements\n", TOTAL_ELEMENTS, doubleOriginalSize);
			
			/* Start from the original last position of the array so as not to affect the data of what we already had. 
			 * At this point, we just want to fill in the newly allocated positions. */
			for (int index = TOTAL_ELEMENTS; index < doubleOriginalSize; index++) {
				do {
					printf("Enter an element at position %d: ", index);
					check = scanf("%d", &dynamicArrayOfIntegers[index]);
					
					if (check <= 0) {
						printf("Invalid format! Please try again!\n");
						while ((c = getchar()) != '\n' && c != EOF);
					}
				} while (check <= 0);
			}

			printf("\nData in the array dynamicArrayOfIntegers:\n");
			for (int index = 0; index < doubleOriginalSize; index++) {
				printf("Element at position %d: %d\n", index, dynamicArrayOfIntegers[index]);
			}
		}

		free(dynamicArrayOfIntegers); //When we do not need the array anymore, we release the memory back to the operating system to avoid memory leak.
		dynamicArrayOfIntegers = NULL; //It is also good practice to set the pointer to NULL to indicate that the pointer is currently not pointing to any memory addresses.
	}

	return 0;
}