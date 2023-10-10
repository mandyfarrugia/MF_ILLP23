#include <stdio.h>

int main(void) {
	int num1 = 93;
	int num2 = 88;

	printf("93 + 88 = %d\n", num1 + num2); //Performs an addition operation.
	printf("93 - 88 = %d\n", num1 - num2); //Performs a subtraction operation.
	printf("93 * 88 = %d\n", num1 * num2); //Performs a multiplication operation.
	printf("93 / 88 = %d\n", num1 / num2); //Performs a division operation.
	//% is the modulus and returns the remainder left after dividing two numbers.
	printf("93 %% 88 = %d\n", num1 % num2); //When you need to display the percentage sign, display another one after as otherwise it will be recognised as a format specifier and may omit certain characters as a result.

	//How to check whether a number is odd or even?
	printf("10 %% 2 = %d, thus the number 10 is even.\n", 10 % 2); //10 / 2 = 5 with a remainder of 0, hence 10 is even.
	printf("9 %% 2 = %d, thus the remainder 9 is odd.\n", 9 % 2); //9 / 2 = 4 with a remainder of 1, hence 9 is odd.

	//Short-handed assignment operators
	int num3 = 4;
	num3 += 20; //num3 = num3 + 20;
	printf("%d\n", num3);
	num3 -= 5; //num3 = num3 - 5;
	printf("%d\n", num3);
	num3 *= 2; //num3 = num3 * 2;
	printf("%d\n", num3);
	num3 /= 3; //num3 = num3 / 3;
	printf("%d\n", num3);

	//Increment (add by 1) and decrement (subtract by 1)
	int num4 = 20;
	printf("%d\n", num4++);
	printf("%d\n", ++num4);

	int num5 = 20;
	printf("%d\n", num4++); //Post-increment takes affect in another printf() when incrementing in a printf().
	printf("%d\n", ++num4); //Pre-increment takes affect immediately even in a printf().

	return 0;
}