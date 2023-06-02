#include "main.h"
#include <stdio.h>

/**
 * _stringLen - a function the calcs the length of  string.
 *
 * @str: the string to be calculated
 * Return: nothing
 */


int _stringLen(const char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	return (size);
}

/**
 * _strncpy - A function tha copies a string from one source
 * to the other according to a specific number
 *
 * @dest: destination string
 * @src: source string
 * @n: the specific number
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int destLen;

	destLen = _stringLen(dest);

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	if (destLen < n)
	{
		dest[n] = '\0';
	}

	dest[a] = '\0';
	return (dest);
}
