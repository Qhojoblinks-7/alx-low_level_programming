#include "main.h"
#include <stdio.h>

/**
 * stringSize - a function that calcs the string size
 *
 * @a:the string to calc
 * Return: 0
 */


int stringSize(const char *a)
{
	int i = 0;


	while (a[i] != '\0')
	{
		i++;
	}

	return (i);
}


/**
 * _strncat - A function that concatenate according to
 * the size of the source string
 *
 * @dest: the destination string
 * @src: the source string
 * @n: the size of the source string
 * Return: 0
 */


char *_strncat(char *dest, char *src, int n)
{
	int destLen = stringSize(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destLen + i] = src[i];
	}

	dest[destLen + i] = '\0';

	return (dest);
}
