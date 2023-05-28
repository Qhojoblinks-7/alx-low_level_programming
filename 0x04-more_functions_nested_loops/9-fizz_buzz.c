#include <stdio.h>

/**
 * Fizz_Buzz test - program that prints the number 1 to 100
 * followed by a new line. if the  numbers are multiples of
 * 3 print fizz and if they are multiples of 5 print buzz
 * otherwise if both print fizzbuzz
 *
 * @n: the number to be printed.
 * Return: 0
 */

int Fizz_Buzz(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}

		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}

		else
		{
			printf("%d ", a);
		}
	}
	putchar('\n');

	return (0);
}


int main(void)
{
	Fizz_Buzz(100);
		return (0);
}
