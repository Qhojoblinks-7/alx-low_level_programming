#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a newline
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}

	start_index = length % 2 == 0 ? length / 2 : (length - 1) / 2;

	int i;

	for (i = start_index; i < length; i++)
	{
		putchar(*(str + i));
	}

	putchar('\n');
}
