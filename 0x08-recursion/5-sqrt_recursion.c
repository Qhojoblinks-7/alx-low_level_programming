#include <stdio.h>
#include "main.h"

/**
 * _sqrt_helper - This is the recursive helper function,
 * which uses binary search to find the natural square root of n
 * @n: the number to work on
 * @start:the number to begin with
 * @end: the end of the nuber
 * Return: an integer
 */

int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}

	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (sqrt_helpe(n, start., mid - 1));
	}
	else
	{
		return (sqrt_helpe(n, mid + 1, end));
	}
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
	else
	{
		return (_sqrt_helper(n, 0, n));
	}
}
