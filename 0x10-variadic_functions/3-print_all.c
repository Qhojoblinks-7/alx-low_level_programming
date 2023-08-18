#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints all kinds of format
 */

void print_all(const char * const format, ...)
{
	va_list ptr;

	int num = 0;
	float digit;
	char c, *str;

	va_start(ptr, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				num = va_arg(ptr, int);
				printf("%d", num);
				break;
			case 'c':
				c = va_arg(ptr, int);
				printf("%c", c);
				break;
			case 'f':
				f = va_arg(ptr, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				break;
		}

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}
