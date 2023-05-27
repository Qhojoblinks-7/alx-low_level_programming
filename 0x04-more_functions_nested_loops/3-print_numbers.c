#include "main.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers,
 * from 0 to 9, folloed by a newline
 *
 * Return: 0
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
