#include <stdio.h>
#include "main.h"


/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number to be calcuulated
 * Returns an integer
 */

int factorial(int n)
{
	if ( n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1))
	}
}
