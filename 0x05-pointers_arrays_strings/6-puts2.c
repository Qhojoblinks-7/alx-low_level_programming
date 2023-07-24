#include "main.h"
#include <stdio.h>

/**
 * puts2 - A function the prints every other char in
 * a string
 *
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int i = 0;

	do

	{
		_putchar(str[i])
		i += 2;
	} while (str[i] != '\0');

	_putchar('\n');
}
