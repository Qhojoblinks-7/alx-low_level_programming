#include "main.h"

/**
 * _strcat - a function that concatenates two string
 * @src: the pointer of ythe source string
 * @dest: the ppointe of the source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
