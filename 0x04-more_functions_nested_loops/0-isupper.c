#include "main.h"
#include <stdio.h>

/**
 * _isupper - A function that checks for uppercase letters
 * returns 1 if 'c' is uppercase or 0 otherwise.
 *
 * @c: the character to be checked
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
