#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that changes a binary to an int
 * @b: the numbew rto be converted
 * Return: an int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = (result << 1) + (*b - '0');
		b++;

	}
	return (result);
}
