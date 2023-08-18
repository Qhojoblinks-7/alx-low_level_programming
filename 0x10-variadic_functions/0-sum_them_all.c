#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - a variadic function that sums numbers
 * @n: the first number of the function
 * Return: the sun
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i, num = 0;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	};

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		sum += num;
	}
	va_end(ptr);

	return (sum);
}
