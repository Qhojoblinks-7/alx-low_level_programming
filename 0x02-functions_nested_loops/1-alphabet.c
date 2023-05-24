#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function that prints the
 * alphabets in lowercase, followed by a new line.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int alpha_lower;

	for (alpha_lower = '97'; alpha_lower <= '122'; alpha_lower++)
	{
		_putchar((char)alpha_lower);
	}
	_putchar('\n');
}
