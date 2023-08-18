#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * followed by a new line.
 * @seperator: the string to be printed b/n strings
 * @n: number of strings to be printed
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	int i;
	char *str;

	va_list ptr;

	va_start(ptr, n);

	for(i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		if (str != NULL)
		{
			printf("%s",str);

			if (seperator != NULL && i < n -1)
			{
				printf("%s", seperator);
			}
		}
		else
		{
			printf("(nill)");
		}
	}

	va_end(ptr);

	printf("\n");
}
