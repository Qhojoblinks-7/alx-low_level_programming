#include "main.h"

/**
 * *_memset - a function that fills the memory with a constant byte
 * @s: being the pointer
 * @b: the value to be set
 * @n: the number of bytes to be filled
 * Return: retuen s;
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		_putchar(*(s + i));

		i++;
	}
	return (s);
}
