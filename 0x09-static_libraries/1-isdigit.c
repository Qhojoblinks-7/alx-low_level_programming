#include "main.h"

/**
 * _isdigit - a function that checks for digit (0 through 9)
 * @c: int is to be checked
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
