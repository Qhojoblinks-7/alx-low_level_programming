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

		if (n < 0 || n > 15)
		{
			return; /* Stop execution for invalid input.*/
		}

		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				product = num1 * num2;
				
				if (num2 == 0)
				{
					_putchar(product + '0');
				}
				
				else
				{
					_putchar(',');
					_putchar(' ');
				}
				
				if (product < 100)
				{
					_putchar(' ');
				}
				
				if (product >= 100)
				{
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
				}
				
				else if (product >= 10)
				{
					_putchar(product / 10 + '0');
				}
				
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n'); /* Add a new line after each row.*/
}
              
