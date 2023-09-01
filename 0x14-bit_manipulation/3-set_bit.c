#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets a value of a bit to 1
 * at a given index
 * @n: a pointer to the number
 * @index: the given index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (0);
}
