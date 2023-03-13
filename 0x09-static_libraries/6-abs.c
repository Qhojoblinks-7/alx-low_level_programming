#include "main.h"

/**
 * _abs - function that computes the absolute values of an integer.
 * @n: the int to be check
 * Return: the absolute value  of the int
 */

int _abs(int n)
{
	if (0 <= n)
	{
		return (n);
	}
	return (-n);
}
