#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a fuction that prints a random number each
 * time its exercuted using the condition if...else...if
 * Return: return an integer
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


/*This block of code checks the value of n and prints the appropriate message*/

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
