#include "main.h"
#include <stdio.h>

/**
 * print_line - A function that prints a straight line
 * in the terminal
 * where 'n' is the number of the time '_' should be
 * printed. the line should end with \n
 * if 'n' is 0 or less the function should print '\n'
 *
 * @n: number of '_'
 * Return: nothing
 */

void print_line(int n)
{
	int line;

	for (line = 0; line <= n; line++)
	{
		if (line <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
