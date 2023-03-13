#include "main.h"

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

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0' && j < n)

	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
