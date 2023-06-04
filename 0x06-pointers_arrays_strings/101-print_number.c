#include "main.h"

/**
 * print_number - A fuction that prints an integer without using
 * long ints.
 *
 * @n: number to be printed
 * Return: 0
 */

void print_number(int n)
{
	int divisor = 1;
	int temp = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (temp /= 10)
	{
		divisor *= 10;
	}


	do

	{
		_putchar('0' + n / divisor);
		n %= divisor;
	       divisor	/= 10;

	} while (divisor != 0);
}
