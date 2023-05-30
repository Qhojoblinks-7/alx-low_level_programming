#include "main.h"
#include <stdio.h>

/**
 * _strlen - A functtion that returns the length
 * of a string.
 *
 * @s: the string to be checked
 * Return: 0
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
