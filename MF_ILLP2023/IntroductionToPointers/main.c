#include <stdio.h>

int main(void) {
	int myNumber = 20;

	printf("The variable myNumber holds the value %d.\n", myNumber);
	//Use the ampersand (&) to get the memory address of a variable (where a variable is stored in memory).
	printf("The variable myNumber resides in the memory address %p.\n", &myNumber);

	//The format specifier %p is used to display memory addresses.

	int* iPtr = &myNumber;
	printf("The pointer iPtr holds the memory address of the variable myNumber which is %p.\n", iPtr);

	/* The below shows how to dereference a pointer.
	 * This simply refers to getting the value/data of a variable in the memory address to which a pointer points.
	 * You should NEVER dereference a pointer which does not hold a memory address as otherwise the program will crash due to the wild pointer issue. */
	printf("The value inside the variable in the memory address to which iPtr points is %d.\n", *iPtr);

	if (iPtr != NULL) { //If the pointer is not null, thus it contains a memory address...
		printf("I am a pointer pointing to the memory address %p.\n", &iPtr);
	}

	//or...

	if (iPtr) { //Another way of saying that if a pointer is indeed pointing to a memory address.
		printf("Once again I am a pointer pointing to the memory address %p.\n", &iPtr);
	}

	return 0;
}