#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic characters
 * @c: the character to be checked
 * Return: 0
 */

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
