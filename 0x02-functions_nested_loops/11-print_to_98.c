#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * numbers shuld be folowed by a new line and a comma
 * numbers should be in order
 * the first printed number should be passed to the function
 * the last printed number should be 98
 * @n: starting number to print from
 * Return: 0 always
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(",");
				printf(" ");
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
				if (i != 98)
					printf(",");
				printf(" ");
		}
		printf("\n");
	}
}
