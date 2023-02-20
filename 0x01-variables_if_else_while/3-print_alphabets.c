#include <stdio.h>

/**
 * main - print alphabets in uppercase and in lower cases
 * and in each case, there should be a new line after a letter
 * Return: Always 0
 */

int main(void)
{
	int ch;

	for(ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
