#include "main.h"

/**
 * print_rev - a function that prints a string in reverse fromat
 * ther to ways to the this
 * we have the simple one that with your function,
 * you declear a variable and init it to the function strlen()
 *  which calculates the the lenght of values or characters
 *  now using the the for loop, you iterate over the characters or
 *  values in the other you want with the index (len + or -1)
 *  dependind on the the order, you increament or decreamet and then
 *  you can use putchar or printf to output ur results
 *  @s: the charater to be evaluated
 */

void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
