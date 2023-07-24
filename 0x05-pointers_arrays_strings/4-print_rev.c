#include "main.h"
#include <stdio.h>

/**
 * print_rev - A function that prints a string, in rverse
 * followed by a newline.
 *
 * @s: the string to be printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		--i;
	}
}
