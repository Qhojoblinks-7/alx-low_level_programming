#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary
 * represwntation of a number
 * @n: the number to be coverted
 */


void print_binary(unsigned long int n)
{
	int  j, i = 0;
	int numBits[sizeof(unsigned long int) * 8];

	if (n == 0)
	{
		_putchar('0');
		return;
	}


	while (n > 0)
	{
		numBits[i] = n & 1;
		n >>= 1;
		i++;
	}


	for (j = i - 1; j >= 0; j--)
	{
		_putchar((numBits[j] + '0'));
	}
}
