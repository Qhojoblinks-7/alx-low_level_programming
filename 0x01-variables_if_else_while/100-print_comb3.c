#include <stdio.h>

/**
 * main -  a program that prints all possible different
 * combinations of two digits.
 * 01 and 10 are considered the same combination
 * of the two digits 0 and 1
 * Return: 0
 */

int main(void)
{
	int comb_num1, comb_num2;

	for (comb_num1 = 0; comb_num1 < 10; comb_num1++)
	{

		for (comb_num2 = comb_num1 + 1; comb_num2 < 10; comb_num2++)
		{
			putchar ('0' + comb_num1);
			putchar ('0' + comb_num2);

			if (comb_num1 != 8 || comb_num2 != 9)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
