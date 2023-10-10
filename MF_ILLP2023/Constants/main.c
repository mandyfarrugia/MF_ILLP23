#include <stdio.h>

/* This is used because it is a faster approach since the compiler knows where the constant is,
 * thus it does not have to look for it within functions in the C file. 
 * This is because macros are processed before functions. */
#define VALUE_OF_PI 3.14 //This is otherwise known as a macro.

int main(void) {
	/* Unlike a normal variable whose value can change during the lifetime of the program,
	 * a constant is declared and initialised immediately during declaration (direct initialisation)
	 * and once initialised, its value never changes. 
	 * A compiler error is generated if you try to change the value of a constant after it has been initialised. */
	const int MAX_SPEED = 40;

	printf("The value of PI is %.2f.\n", VALUE_OF_PI); //.2 displays the float number up to two decimal places, hence removing the trailing zeroes.

	/* Declaring a constant using const in C is a bad idea since we would not be using the ANSI C Standard.
	 * There exist many versions of C such as C90, C11, C99, C17, etc. 
	 * With that being said, many compilers for C exist. Therefore, ANSI C is used to be compatible with all compilers. */
	return 0;
}