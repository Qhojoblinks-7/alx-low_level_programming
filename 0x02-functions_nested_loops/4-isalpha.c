#include <stdio.h>
#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic
 * characters.
 * returns 1 if true or 0 otherwise
 *
 * @c: the character to be checked
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
