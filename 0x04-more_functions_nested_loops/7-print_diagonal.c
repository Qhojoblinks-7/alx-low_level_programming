#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * @n: int to be checked
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; i < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
