#include <stdio.h>
#include "main.h"

/**
 * print_sign - a function that prints a sign of
 * a number.
 * returns 1 and prints '+' if 'n' > 0
 * returns 0 and prints 0 if 'n' == 0
 * returns '-1' and prints '-' if 'n' < 0
 *
 * @n: the number to be checked
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
