#include "main.h"

/**
 * _strlen - calculates the length of the string
 * @str: pointer to the string to be mearsured
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int length = 0;


	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 *  puts_half - a function that prints the half of a string
 * followed by a new line
 * the funtion should print the second half of the string
 * @str: this string to be evaluated
 * now this function will call _strlen
 * Return: void
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index = length % 2 == 0 ? length / 2 : (length - 1) / 2;

	int i;


	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');



	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
