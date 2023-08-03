#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: a pointer to dtring to be printed
 */


void _print_rev_recursion(char *s)
{
	int n;

	scanf("%d", &n);

	*s = n -1;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
}

