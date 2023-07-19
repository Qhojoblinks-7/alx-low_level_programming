#include <stdio.h>

/**
 * main - a function that prints the sum of the
 * multiples of 3 and 5 below 1024.
 * Return: 0
 */

int main(void)
{
	int sum = 0, num;

	for (num = 1; num < 1024; num++)
		/*looping through the number from 1 to 1024*/
	{
		if (num % 3 == 0 || num % 5 == 0)
			/*checking if number is a multiple of 3 or 5*/
		{
		sum += num;/* if true we add it to sum*/
		}
	}
	printf("%d\n", sum);
	return (0);
}
