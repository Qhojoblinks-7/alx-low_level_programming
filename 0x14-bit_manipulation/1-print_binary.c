#include "main.h"

/**
 * print_binary - prints the binary equivalent of a dec
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			count = 1;
		}

		else if (count)
		{
			_putchar('0');
		}
	}
}
