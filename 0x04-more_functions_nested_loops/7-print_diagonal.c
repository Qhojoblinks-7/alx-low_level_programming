#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on
 * the terminal.
 * Where n is the number of times the character \
 * should be printed
 * If n is 0 or less, the function should only print a \n
 *
 * @n: number of '\'
 * Return: nothing
 */

void print_diagonal(int n)
{
	int diagonal, i;

	for (diagonal = 1; diagonal <= n; diagonal++)
	{
		for (i = 0; i < diagonal; i++)
		{
			_putchar(' ');
		}
		if (n <= 0)
		{
			putchar('\n');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
