#include "main.h"

/**
 * _memcpy - A function that copies a memory area
 *
 * @dest: dsetination area
 * @src: source arae
 * @n: number of bytes from memory area
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
