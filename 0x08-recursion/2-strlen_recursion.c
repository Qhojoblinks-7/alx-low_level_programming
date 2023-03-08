#include "main.h"

/**
 * _strlen_recursion - a function that prints the length of a string
 * @s: the string ofr which the length is to be printed
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;

	return (_strlen_recursion(s) + 1);
}
