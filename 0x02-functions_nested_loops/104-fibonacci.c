#include <stdio.h>
/**
 * main - a function that prints the first 98
 * fibonacci number
 * Return:0
 */

int main(void)
{
	unsigned long int first_num = 1, second_num = 2, count, next;

	printf("%lu, %lu, ", first_num, second_num);

	for (count = 2; count < 99; count++)
	{
		next = first_num + second_num;

		printf("%lu", next);

		if (count < 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		first_num = second_num;
		second_num = next;
	}
	return (0);
}
