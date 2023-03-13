#include "main.h"

/**
 * _isupper - a function that checks for all uppercase letters
 * @c: the character to be printed
 * Return: 1 if uppercase or print 0 if otherwise
 */

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

