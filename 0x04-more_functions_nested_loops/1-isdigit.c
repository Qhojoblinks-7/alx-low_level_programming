#include "main.h"
#include <stdio.h>

/**
 * _isdigit - A functio that checks for digits from 0 to 9
 * returns 1 id 'c' is a digit and 0 otherwise
 *
 * @c: the number to be checked
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
