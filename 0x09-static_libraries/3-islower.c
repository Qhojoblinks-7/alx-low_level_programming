#include "main.h"

/**
 * _islower - a function that checks for all lowercase letters
 * @c: the charater to be checked
 * Return: 1 if c is lowercase else 0 if otherwise.
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
