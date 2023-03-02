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

	for (a = 0; dest[a] != '\0'; a++)
	{


	for (b = 0; src[b] != '\0'; b++)

	{
		dest[a] = src[b];
	}

	dest[a] = '\0';
	}

	return (dest);
	
}
