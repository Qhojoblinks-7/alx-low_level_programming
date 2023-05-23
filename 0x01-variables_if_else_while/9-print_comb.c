#include <stdio.h>

/**
 * main - a program that prints all possible combinations of
 * single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * You are not allowed to use any variable of type char
 * Return: 0
 */

int main(void)
{
	int num_comb;

	for (num_comb = 0; num_comb < 10; num_comb++)
	{
		putchar ('0' + num_comb);

		if (num_comb < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}
