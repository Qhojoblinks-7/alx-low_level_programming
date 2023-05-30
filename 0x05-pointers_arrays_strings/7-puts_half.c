#include "main.h"
#include <stdio.h>

/**
 * puts_half - A function that prints half of a string
 * followed by a new line.
 *
 * @str: the string to be printed
 */

void puts_half(char *str)
{
	int length = 0;
	int i = 0;
	int n;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length >  1)
	{
		n = (length - 1) / 2;

		for (i = n + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
