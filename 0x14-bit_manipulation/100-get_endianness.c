#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a finction that checks the endianess
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *mask = (unsigned char *)&num;

	if (*mask == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
