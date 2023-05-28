#include "main.h"
#include <stdio.h>

/**
 * print_triangle - A function that prints a triangle
 * folloed by a newline
 * if 'size' is 0 or less print newline
 * use the character # to print the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int length, breath, space;

	if ( size <= 0)
	{
		_putchar('\n');
		return;
	}

	for ( breath = 1; breath <= size; breath++)
	{
		space = size - breath;

		for ( length = 1; length <= space; length++)
		{
			_putchar(' ');
		}

		for (length = 1; length <= breath; length++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
