#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints all kinds of format
 * @format: the format to be printed
 */

void print_all(const char * const format, ...)
{
	va_list ptr;

	int num = 0, a;
	float digit;
	char c, *str;

	va_start(ptr, format);

	while (format && format[a])
	{
		switch (format[a])
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
				digit = va_arg(ptr, double);
				printf("%f", digit);
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

		if ((format[a] == 'c' || format[a] == 'i' || format[a] == 'f' || format[a] == 's') && format[a + 1])
		{
			printf(", ");
		}
		a++;
	}
	va_end(ptr);
	printf("\n");
}
