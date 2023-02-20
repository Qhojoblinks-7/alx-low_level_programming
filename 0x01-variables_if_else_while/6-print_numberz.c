#include <stdio.h>

/**
 * main - print all numbers of base 10 starting from 0
 * followed by a anew line using only putchar
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
