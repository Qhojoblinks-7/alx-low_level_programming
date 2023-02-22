#include "main.h"

/**
 *  print_sign - function that prints the sign of a a number
 *  @n: checks the int
 *  Return: 1 and print + if the number is greatere than 0
 *  0 an dprint 0 if the number is equal to 0
 *  -1 and print - if the number is less than 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}

