#include "main.h"
#include <string.h>

#define MAX_LEN 100

/**
 * _strncat - a function that joit a limited number of character
 * to a destination string
 *@n: number of character to be added
 *@dest: pointer of the destination string
 *@src: pointer of the source string
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	if (i + strlen(dest) + 1 <= MAX_LEN)
	{
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + n]  = '\0';
	}

	return (dest);
}
