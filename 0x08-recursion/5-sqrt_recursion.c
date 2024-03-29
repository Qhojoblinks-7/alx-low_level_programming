#include <stdio.h>
#include "main.h"

/**
 * _sqrt_helper - This is the recursive helper function,
 * which uses binary search to find the natural square root of n
 * @n: the number to work on
 * @i:the number to begin
 * Return: an integer
 */

int _sqrt_helper(int n, int i)
{

	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}


/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: the number to work on
 * Return: the square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (-1);
	}

	if (n == 0  || n == 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, 1));
}
