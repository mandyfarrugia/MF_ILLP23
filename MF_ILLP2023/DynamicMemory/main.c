/* stdio.h - Standard Input and Output header file
 * stdlib.h - Standard C Library header file */

#include <stdio.h>
#include <stdlib.h> //Include stdlib.h since we need to use malloc(), realloc(), and free().

int main(void) {
	/* So far with static memory, everything had a fixed size and existed throughout the whole lifetime of the program.
	 * Variables are stored in stack and given a fixed size, for instance an integer takes up 4 bytes of memory. 
	 * Moreover, we cannot free stack memory. Stack memory refers to a temporary block of storage. 
	 * When it comes to dynamic memory, memory is stored on heap using physical memory. 
	 * Memory can be allocated, re-allocated, and freed at any point in time during the lifetime of the program. */

	/* Use malloc() to get dynamic memory to store one integer. */
	int* dynamicPtr = (int*)malloc(1 * sizeof(int)); //number of integers * 4 bytes = 4 bytes per integer

	/* It is always best to check for NULL since malloc may not work in the case of insufficient memory. 
	 * It is rarely the case that malloc() does not work (when malloc() fails, it returns NULL). */
	if (dynamicPtr != NULL) {
		printf("The memory address to which the pointer points is %p.\n", &dynamicPtr);

		//To get/set the data/value, we always dereference the pointer.
		*dynamicPtr = 93;
		printf("The value corresponding to the space with the memory address to which the pointer points is %d.\n", *dynamicPtr);
	}
	
	/* <data-type>* - Declaring a pointer
	 * *<identifier-of-pointer> - Dereferencing a pointer */

	//free() can only be used when dealing with dynamic memory, will not work with static memory. Use free() to avoid memory leak.
	free(dynamicPtr); //Free the pointer from dynamic memory allocated to it.

	/* Failure to free dynamic memory may result in memory leak, which is potentially dangerous 
	 * since the larger the pool of unreleased memory can result in failures such as unexpected shutdowns.
	 * You may notice the performance of your operating system becoming depleted. 
	 * C encourages memory-efficiency, do not waste precious memory! :) */

	dynamicPtr = NULL; //Set the pointer to NULL so it no longer points to a memory address after freeing dynamic memory back to the operating system.

	if (dynamicPtr == NULL) {
		printf("The pointer is no longer pointing to any memory addresses!\n");
	}

	//or...

	if (!dynamicPtr) {
		printf("Once again, the pointer is no longer pointing to any memory addresses!\n");
	}

	return 0;
}