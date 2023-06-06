#include "main.h"

/**
 * _memset - A function that files memory with constant bytes.
 *
 * @s: a pointer to a string
 * @b: constant character bytes
 * @n: bytes of memory area pointed by s and b
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
