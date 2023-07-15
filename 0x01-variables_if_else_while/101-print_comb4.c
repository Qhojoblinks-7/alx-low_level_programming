#include <stdio.h>

/**
 * main - a program that prints all possible different
 * combinations of three digits.
 * 012, 120, 102, 021, 201, 210 are considered the same
 * combination of the three digits 0, 1 and 2
 *
 * Return: 0
 */


int main(void)
{
	int comb_num1, comb_num2, comb_3;
	int last_num = 789;

	for (comb_num1 = 0; comb_num1 < 10; comb_num1++)
	{
		for (comb_num2 = comb_num1 + 1; comb_num2 < 10; comb_num2++)
		{
			for (comb_3 = comb_num2 + 1; comb_3 < 10; comb_3++)
			{
				putchar('0' + comb_num1);
				putchar('0' + comb_num2);
				putchar('0' + comb_3);


				if (comb_num1 != last_comb/100 || 
					comb_num2 != (last_num % 100)/10 || 
					comb_3 != last_num % 10)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
	return (0);
}
