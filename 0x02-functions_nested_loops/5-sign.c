#include "main.h"

/**
 * print_sign - prints the signs of a number
 * @n: the int is to check
 * Return: 1 and print + if n is greater than n
 * or 0 if n is equal to 0 or -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
}
