#include <stdio.h>
#include "main.h"

/**
 * is_divisible - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: prime number
 * @divisor: divisor
 * Return: an int
 */
int is_divisible(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (0);
	}

	if (n % divisor == 0)
	{
		return (1);
	}

	return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: prime number
 * Return: an int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (!is_divisible(n, 2);
}
