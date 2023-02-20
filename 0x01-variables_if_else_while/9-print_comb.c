#include <stdio.h>

/**
 * main - print all posible combination of single numbers
 * followed by , and a space
 * it should be printed in ascendind oder
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
