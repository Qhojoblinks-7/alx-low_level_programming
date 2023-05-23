#include <stdio.h>

/**
 * main - a program that prints all single
 * digits of base 10 followed by a newline
 * Return: 0
 */

int main(void)
{
	int base_ten;

	for (base_ten = 0; base_ten < 10; base_ten++)
	{
		printf("%d", base_ten);
	}
	putchar('\n');

	return (0);
}
