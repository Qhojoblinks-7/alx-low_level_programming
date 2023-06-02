#include "main.h"
#include <stdio.h>

/**
 * _strcat - A function that concatenates a two strings
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte
 *
 * @src: the source string
 * @dest: the destination string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *str = dest;
	int a = 0, b = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		str[a + b] = src[b];
		b++;
	}

	str[a + b] = '\0';

	return (dest);
}
