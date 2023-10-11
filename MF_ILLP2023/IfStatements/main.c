#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MIN_DRIVING_AGE 18

int main(void) {
	int check = 0;
	int age = 0;
	char c;

	/* Write a program which asks the user to enter their age. 
	 * Deny any input which is not numeric or any age which is less than 18. */
	do {
		printf("Enter your age: ");
		check = scanf("%d", &age);

		if (check <= 0) {
			printf("Invalid format! Please try again!\n");
			while ((c = getchar()) != '\n' && c != EOF);
		}
		else if(age < 18) {
			printf("Sorry but you cannot drive! You must be over the age of %d.\n", MIN_DRIVING_AGE);
		}
	} while (check <= 0 || age < 18); //Keep asking until either the correct format is provided or an age of 18 and over is supplied.
	
	return 0;
}