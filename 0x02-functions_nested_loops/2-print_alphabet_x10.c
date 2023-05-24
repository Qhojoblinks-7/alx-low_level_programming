#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a function that prints '10x'
 * the alphabets in lowercase, followed by a newline.
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int alpha_lower_x10;
	int i;

	for (alpha_lower_x10 = 0; alpha_lower_x10 < 10; alpha_lower_x10++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar((char)i);
		}
		_putchar('\n');
	}
}

