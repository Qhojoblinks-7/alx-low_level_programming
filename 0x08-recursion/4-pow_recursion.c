#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the value of
 * x raised to the power of y
 * @x: base number
 * @y: exponent
 * Return: exponent
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (y * _pow_recursion(x, y - 1));
	}
}
