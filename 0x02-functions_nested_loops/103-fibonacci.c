#include <stdio.h>

/**
 * main - a function that prints the sum of even numbers
 * of the fibonacci numbers from 2 to 4000000.
 * Return: 0
 */

int main(void)
{
	int first_num = 1, second_num = 2, even_sum = 0, next = 0;

	while (second_num <= 4000000)
	{
		if (second_num % 2 == 0)
		{
			even_sum += second_num;
		}
		next = first_num + second_num;
		first_num = second_num;
		second_num = next;
	}
	printf("%d\n", even_sum);
	return (0);
}
