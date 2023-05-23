#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - a function that prints a random number
 * when ever its exercuted.
 * before it prits the statements, it checks if
 * the last digit of 'n' is greater or less than 6
 * or ==0.
 * to do this we use the modulus operator '%' to
 * divide the random numberby 10.
 * the result which is the last digit
 * is then compered to 6 and 0 before
 * the statement is printed.
 * Return: an integer.
 */


int main(void)
{
	int n;
	int modulus;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* this exprsion performs the modulus operation */
	modulus = n % 10;

	/* now the if codition statement does the comparism */
	 /* and the prints the apporpriate condition*/

	if (modulus > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, modulus);
	}

	else if (modulus == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, modulus);
	}

	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulus);
	}

	return (0);
}
