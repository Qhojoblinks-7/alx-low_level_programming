#include <stdio.h>

/**
 * main - a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 0; num <= 9; num++)
	{
		putchar ('0' + num);
	}


	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
