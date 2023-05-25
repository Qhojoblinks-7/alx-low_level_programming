#include <stdio.h>
#include "main.h"

/**
 * print_times_table - a fuction that prints n times
 * table starting with 0.
 * if n > 15 || n < 0 the function stops.
 *
 * @n: the number of times the time table should be
 * printed.
 * Return: nonthing
 */

void print_times_table(int n)
{
	int num1, num2, product;


	if (n < 0 || n > 15) /* this stops exercution if this condion is met */
	{
		return;
	}
	for (num1 = 0; num1 <= n; num1++)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			product = num1 * num2;

			if (product >= 100) /* this condition says that if this condition is met */
			{
				_putchar(product / 100 + '0');
				_putchar((product / 10) % 10 + '0'); /* convert it to tense in ints */
				_putchar(product % 10 + '0'); /* convert it to ones in ints */
			}
			else if (product >= 10)
			{
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			if (num2 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
