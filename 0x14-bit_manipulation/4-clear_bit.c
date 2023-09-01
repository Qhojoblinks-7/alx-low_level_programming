#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that set a bit to 0 at a
 * given index
 * @n: a pointer to the number
 * @index: the given index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (0);
}
