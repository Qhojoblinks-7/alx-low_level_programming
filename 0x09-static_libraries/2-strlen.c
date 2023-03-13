#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * int length,
 * length is increemented
 * return the length
 * @s: the array the contains the sring to be evaluated
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != 0)
	{
		length++;
	}
	return (length);
}
