#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints natural numbers from n to 98
 * numbers should be followed by a comma and a space
 * numbers should be in ascending order
 * the first printed number should be passed to the function
 * the last printed number should be 98
 * @n: function parameter
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
}
