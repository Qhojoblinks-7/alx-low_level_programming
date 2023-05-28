#include "main.h"
#include <stdio.h>

/**
 * more_numbers - A function that prints 0 to 14
 * times 10 with a new line.
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int num;
	int times_10;

	for (times_10 = 0; times_10 < 10; times_10++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('0' + num / 10);
			}

			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
