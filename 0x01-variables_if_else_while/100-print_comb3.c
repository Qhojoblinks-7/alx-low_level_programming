#include <stdio.h>

/**
 * main - print all combo of two numbers posible
 * followed by ',' and ' '
 * and since they are they are to contain diff numbers
 * use the variable m and n
 * Return: Always 0
 */

int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
