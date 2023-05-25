#include "main.h"
#include <stdio.h>

/**
 * times_table - a function that prints the 9x
 * table starting from 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int num1, num2;
	int product;


	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			product = num1 * num2;

			/* the if statement here checks if 0 is not */
			/* the last number. if true it prints ',' and ' ' */
			if (num2 != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			/* this part of the code checks if the product is */
			/*  <= 10. if true, the first statement prints the */
			/* ones colomn and the second prints the tense colomn */

			if (product >= 10)
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			else
			{
				_putchar(' ');
				_putchar('0' + product);
			}
		}
		_putchar('\n');
	}
}
