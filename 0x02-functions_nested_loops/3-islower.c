#include <stdio.h>
#include "main.h"

/**
 * _islower - a function that checks for lowercase
 * returns 1 if 'c' is lowercase or 0 otherwise
 *
 * @c: the character to be checked
 * Return: nothing.
 */

int _islower(int c)
{

	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
