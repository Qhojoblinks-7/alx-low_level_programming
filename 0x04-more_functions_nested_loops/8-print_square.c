#include "main.h"
#include <stdio.h>

/**
 * print_square - a function that prints a square
 * followed by a new line.
 * Where size is the size of the square
 * If size is 0 or less, the function should
 * print only a new line
 * Use the character # to print the square
 *
 * @size: the sie of the square
 * Return: nothing
 */

void print_square(int size)
{
	int length, breath;

	for (length = 0; length <= size; length++)
	{
		for (breath = 0; breath <= length; breath++)
		{
			_putchar(' ');
		}

		if (size <= 0)
		{
			_putchar('\n');
		}

		_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
