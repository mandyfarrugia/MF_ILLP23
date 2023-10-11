#include <stdio.h>

/* When dealing with arrays, you should ideally set the size as a constant to render the code more readable.
 * Furthermore, it would simplify modifying the size of the array if needs be.
 * This obviously simply refers to changing the value of the constant since we cannot actually change the size of the array.*/
#define TOTAL_ELEMENTS 5

int main(void) {
	/* In a traditional array, we need to specify a size which determines up to how many elements we can hold. 
	 * An array simply refers to a data structure which is able to store a certain number of elements of the same type, 
	 * for instance an array of integers. The size will be fixed and cannot change throughout the lifetime of the program.
	 * Therefore, you need to know how many elements you will be storing beforehand.
	 * In programming terms, we say that a traditional array cannot grow nor shrink! */
	int arrayOfIntegers[TOTAL_ELEMENTS] = { 4, 5, 6, 7, 8 }; //This refers to a direct initialisation of an array where it is given a type and an identifier, as well as initialised with hardcoded data on the same line.

	int secondArrayOfIntegers[TOTAL_ELEMENTS]; //Here we are simply declaring an array of integers, we will assign it values manually later.

	/* In arrays, we start from 0 and not 1. Therefore, index/location/position 0 refers to the first element in an array.
	 * This is because arrays, in any programming language (not just C), are zero index-based, thus start from 0. */

	secondArrayOfIntegers[0] = 2; //The first element is in position 0 and contains the value 2.
	secondArrayOfIntegers[1] = 4; //The second element is in position 1 and contains the value 4.
	secondArrayOfIntegers[2] = 6; //The third element is in position 2 and contains the value 6.
	secondArrayOfIntegers[3] = 8; //The fourth element is in position 3 and contains the value 8.
	secondArrayOfIntegers[4] = 10; //The fifth element is in position 4 and contains the value 10.

	/* Beginners may be tempted to use this method to print each element. 
	 * This may be tedious in the case of, for example, 50 elements!
	 * A simple solution would be to use a loop! */
	printf("Printing the contents of the loop the wrong way:\n");
	printf("Index %d: %d\n", 0, secondArrayOfIntegers[0]);
	printf("Index %d: %d\n", 1, secondArrayOfIntegers[1]);
	printf("Index %d: %d\n", 2, secondArrayOfIntegers[2]);
	printf("Index %d: %d\n", 3, secondArrayOfIntegers[3]);
	printf("Index %d: %d\n", 4, secondArrayOfIntegers[4]);

	printf("\nPrinting the contents of the loop the right way:\n");
	/* A for-loop is used when we know exactly how many we want code to repeat itself.
	 * In this case, we want it to print the contents of each element in the array. */
	for (int index = 0; index < TOTAL_ELEMENTS; index++) {
		printf("Index %d: %d\n", index, secondArrayOfIntegers[index]);
	}

	return 0;
} 