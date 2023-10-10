/* This is the part where we include any libraries which we may need to use for our program.
 * - stdlib.h contains atoi(), atof(), malloc(), realloc(), free(), calloc(), etc. 
 * - stdio.h contains printf(), fprintf(), sprintf(), fopen(), fclose(), scanf(), etc.
 * - One may also want to declare their own header files.
 *   - Include external libraries/header files using #include <header-file.h>.
 *   - Inlude user-defined/your own header files using #include "header-file.h". */
#include <stdio.h> //Required for functions such as printf() and scanf().

/* The main method is entry point to our program.
 * The operating system will start executing the program by entering this method. 
 * Failure to include a main method will cause a compiler error. */
int main(void) {
	/* - C is case-sensitive so 'D' and 'd' are different!
		  - This is because the binary equivalents/ASCII equivalents of both letters differ from one another.
	 * - Every statement in C must end with a semicolon (;)! */

	printf("Hello World!"); //Display Hello World to the console.

	/* The value returned by the main method determines whether the program has run successfully.
	 * If the main method returns 0, then the program has run successfully. 
	 * Any other value than 0 indicates that a problem has arisen during runtime,
	 * may be caused by erroneous input or an error amidst file handling. */
	return 0;

	/* Anything beyond the return statement is ignored because return is used to return data 
	 * and then exit from the function. Methods that return a value are expected to return data
	 * otherwise a compiler error will show up. */
}