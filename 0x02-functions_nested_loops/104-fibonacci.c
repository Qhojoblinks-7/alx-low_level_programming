#include <stdio.h>
/**
 * main - a function that prints the first 50
 * fibonacci number
 * Return:0
 */

int main(void)
{
	unsigned long long int first_num = 1, second_num = 2, count, next;

	printf("%llu, %llu, ", first_num, second_num);

	for (count = 2; count < 50; count++)
	{
		next = first_num + second_num;

		printf("%llu", next);

		if (count < 49)
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
