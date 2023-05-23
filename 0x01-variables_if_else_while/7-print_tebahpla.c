#include <stdio.h>

/**
 * main - a program that prints lower letters in reverse
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char lower_reverse_alpha = 'z';

	do

	{
		putchar(lower_reverse_alpha);

		lower_reverse_alpha--;
	} while (lower_reverse_alpha >= 'a');

	{
		putchar('\n');
	}

	return (0);
}
