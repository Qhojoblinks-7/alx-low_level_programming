#include "main.h"

/**
 * _islower - print a functio that checks for lower case letters
 * @c: the character to to check
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
