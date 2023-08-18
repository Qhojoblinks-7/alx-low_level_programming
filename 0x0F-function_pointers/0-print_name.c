#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a pointer to the name to be printed
 * @f: a pointer to the function to to print the
 * name.
 */

void print_name(char *name, void (*f)(char *name))
{
	int len = 0, i = 0;

	if (name == NULL || f == NULL)
		return;

	while (name[i] != '\0')
	{
		len++;
		i++;
	}

	f(name);
}
