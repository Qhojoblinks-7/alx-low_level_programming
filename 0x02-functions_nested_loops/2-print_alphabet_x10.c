#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabets in lowercases
 * followed by a new line
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		ch = 'a';
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			_putchar(i);
		}
	}
}

