#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that prints numbers
 * from 0 t0 9 except 2 and 4.
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int except;

	for (except = 0; except <= 9; except++)
	{
		if (except == 2 || except == 4)
		{
			continue;
		}
		_putchar('0' + except);
	}

	_putchar('\n');
}
