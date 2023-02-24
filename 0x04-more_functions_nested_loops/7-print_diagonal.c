#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * @n: int to be checked
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
