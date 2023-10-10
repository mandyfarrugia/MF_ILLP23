#include <stdio.h>

int main(void) {
	/* Declare a variable by taking into consideration the following:
	 *  1. What type of value do you want to store in your variable? 
	 *  2. What do I want to name my variable?
	       - DO NOT USE C KEYWORDS AS IDENTIFIERS!
		   - Identifier refers to the name of a variable. 
		   - Variable names should not contain any spaces, nor begin with numbers.
		     - In the case of an identifier with multiple words, separate each word with an underscore or use camel-case notation. 
			 - Camel-case notation is as follows: int myNumber;
		3. What value will I assign to my variable?
		   - This is why it's important to know the data type of the variable beforehand! */

	int myNumber; //Here we are just declaring a variable, we give it a type and a name.

	//Initialisation is when we assign a value to the variable.
	myNumber = 5; //Here we have initialised (set a value) a value of 5 to the variable myNumber.

	int myNumber2 = 30; //Direct initialisation is when you declare and initialise your variable at the same time.

	short myShortNumber = 45; //Takes up half as much space as an integer.

	//An integer takes up four bytes whilst a short takes up two bytes.

	/* Use \n to skip a line between the use of printf() statements. 
	 * By default, printf() does not skip a line, we have to handle that ourselves. */
	printf("The size of an integer is %zu.\n", sizeof(int)); //%zu is used to print sizes of data types.

	short sNum = 3000;
	unsigned short usNum = 23;
	int iNum = 20000000; //an int is signed by default, thus int and signed int mean the same thing.
	unsigned int uiNum = 224;
	long int liNum = 22324;
	unsigned long int uliNum = 99241;
	long long int lliNum = 99999999999999LL; //Use LL suffix to force the compiler to treat the number as a long long.
	unsigned long long int ulliNum = 2222222222222222LL; //Use LL suffix to force the compiler to treat the number as a long long.
	float fNum = 2.1F; //Use F/f suffix to force the compiler to treat the decimal point number as a float instead of a double.
	double dNum = 32.1;
	long double ldNum = 99924.241L; //L/l denotes that we are forcing the compiler to treat 99924.241 as a long double rather than double.
	//Characters can range from letters, symbols to numbers.
	char ch = 'D'; //Single characters must be wrapped up in single quotes and only one character at a time.
	char name[20] = "Mandy"; //char[] is known as an array of characters.

	/* Float offers the least accuracy, while double and long double offer more accuracy.
	 * By default, the compiler treats any decimal/floating point number as a double. 
	 * For float, use the f/F suffix to force the compiler to treat it as a float.
	 * In the case of long double, use the l/L suffix to force the compiler to treat it as a long double. */

	//sizeof() is a built-in C function which tells us how many spaces in bytes a variable or a data type takes up in memory.

	//The format specifier to print the size of a data type is %zu.
	printf("Size of an signed short int: %zu bytes\n", sizeof(sNum));
	printf("Size of an unsigned short int: %zu bytes\n", sizeof(usNum));
	printf("Size of an signed int: %zu bytes\n", sizeof(iNum));
	printf("Size of an unsigned int: %zu bytes\n", sizeof(uiNum));
	printf("Size of a signed long int: %zu bytes\n", sizeof(liNum));
	printf("Size of a unsigned long int: %zu bytes\n", sizeof(uliNum));
	printf("Size of a signed long long int: %zu bytes\n", sizeof(lliNum));
	printf("Size of an unsigned long long int: %zu bytes\n", sizeof(ulliNum));
	printf("Size of a float: %zu bytes\n", sizeof(fNum));
	printf("Size of a double: %zu bytes\n", sizeof(dNum));
	printf("Size of long double: %zu bytes\n", sizeof(ldNum));
	printf("Size of a char: %zu bytes\n", sizeof(ch));
	printf("Size of an array of characters: %zu bytes\n\n", sizeof(name));

	//In C, the byte and string do not exist. For string, we have an array of characters, whereas for byte we have char which stores from 0 to 255.

	/* The difference between signed and unsigned numbers is the following:
	 *  - signed allows both positive and negative numbers.
	 *  - unsigned only allows positive numbers, and no negative numbers. */

	//You can also find out the size of a data type rather than just how much space a variable takes up in memory.
	printf("The size of the signed short data type: %zu bytes\n", sizeof(signed short));
	printf("The size of the unsigned short data type: %zu bytes\n", sizeof(unsigned short));
	printf("The size of the signed integer data type: %zu bytes\n", sizeof(signed int));
	printf("The size of the unsigned integer data type: %zu bytes\n", sizeof(unsigned int));
	printf("The size of the signed long integer data type: %zu bytes\n", sizeof(signed long int));
	printf("The size of the unsigned long integer data type: %zu bytes\n", sizeof(unsigned long int));
	printf("The size of the signed long long integer data type: %zu bytes\n", sizeof(signed long long int));
	printf("The size of the unsigned long long integer data type: %zu bytes\n", sizeof(unsigned long long int));
	printf("The size of the float data type: %zu bytes\n", sizeof(float));
	printf("The size of the float data type: %zu bytes\n", sizeof(float));
	printf("The size of the double data type: %zu bytes\n", sizeof(double));
	printf("The size of the double data type: %zu bytes\n", sizeof(double));
	printf("The size of the long double data type: %zu bytes\n", sizeof(long double));
	printf("The size of the long double data type: %zu bytes\n", sizeof(long double));
	printf("The size of the signed char data type: %zu bytes\n", sizeof(signed char));
	printf("The size of the unsigned char data type: %zu bytes\n", sizeof(unsigned char));

	/* Format specifiers are a way of displaying the contents of a variable depending on its data type.
	 * %d is used to print the contents of variables of type int and short (specifically %hd for signed short).
	 * %lf is used to print the contents of variables of type double.
	 * %f is used to print the contents of variables of type float.
	 * %c is used to print the contents of variables of type char.
	 * %s is used to print the contents of variables of type char[] (or a string as known in C# or Java).
	 * %lld is used to print the contents of variables of type long long. */

	return 0;
}