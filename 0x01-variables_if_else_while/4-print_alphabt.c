#include <stdio.h>

/**
 * main - a program that prints small letters
 * except 'e' and 'q'.
 * Return: 0
 */

int main(void)
{
	char alpha_except;

	alpha_except = 'a';

	for (alpha_except = 'a'; alpha_except <= 'z'; alpha_except++)
	{
		if (alpha_except == 'e' || alpha_except == 'q')
		{
			continue;
		}

		putchar(alpha_except);
	}
	putchar('\n');
	return (0);
}
