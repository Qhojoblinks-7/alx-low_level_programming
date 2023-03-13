#include "main.h"

/**
 * _puts - a function that prints a string,
 * followed by a new line to  stdout
 * it takes a parameter str
 * a variable that is = 0
 * it is iterated through with a loop
 * where the array != \0
 * and uses _putchar to print the output
 * Return: 0
 * @str: the array to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
