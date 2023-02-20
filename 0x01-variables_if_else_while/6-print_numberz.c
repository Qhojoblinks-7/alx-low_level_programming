#include <stdio.h>

/**
 * main - print all numbers of base 10 starting from 0
 * followed by a anew line using only putchar
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
