#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: the area where the area is to be copird to
 * @src: the area to be copied
 * @n: number of bytes to be copied
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;


	for (; i < n; i++)
		dest[i] = src[i];



	return (dest);
}
