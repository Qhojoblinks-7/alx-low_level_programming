#include "main.h"

/**
 * _print_rev_recursion - fuction that prints a string in reverse recursion
 * @s: the string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
