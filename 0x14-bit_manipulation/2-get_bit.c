#include "main.h"

/**
 * getBit - returns the value of a bit at an index in a
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > 63)
	{
		return (-1);
	}

	bitVal = (n >> index) & 1;

	return (bitVal);
}
