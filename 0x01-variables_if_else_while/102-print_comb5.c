#include <stdio.h>

/**
 * main - a program that prints all possible combinatios
 * of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits.
 * 1 should be printed as 01
 * The combinations of numbers should be printed
 * in ascending order
 * 00 01 and 01 00 are considered as the same combination
 * of the numbers 0 and 1
 * Return: 0
 */

int main(void)
{
	int comb_1, comb_2;

	for (comb_1 = 0; comb_1 < 100; comb_1++)
	{
		for (comb_2 = comb_1 + 1; comb_2 < 100; comb_2++)
		{
			if (comb_1 != comb_2)
			{
				putchar('0' + (comb_1 / 10));
				putchar('0' + (comb_1 % 10));
				putchar(' ');
				putchar('0' + (comb_2 / 10));
				putchar('0' + (comb_2 % 10));

				if (comb_1 < 98 || comb_2 < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

