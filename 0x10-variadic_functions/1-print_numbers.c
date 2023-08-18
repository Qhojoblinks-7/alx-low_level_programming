#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * followed by a new line.
 * @separator: the string to be printered b/n numbers
 * @n: number of integers to be printered
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);

	printf("\n");
}
