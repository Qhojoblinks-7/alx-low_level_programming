#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - a function that checks if an input
 * is valide
 * @str: the string to be checked
 * Return: and int
 */

int is_valid_number(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
	str++;
	}
	return (1);
}

/**
 * str_to_uint - a fnction that changes a string to
 * an unsigned int
 * @str: the string to be changed
 * Return: the result
 */

unsigned int str_to_uint(const char *str)
{
	unsigned int result = 0;

	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

/**
 * main - the main function
 * @argc: argument  count
 * @argv: array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int num1 = 0, num2 = 0, result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (9);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = str_to_uint(argv[1]);
	num2 = str_to_uint(argv[2]);
	result = num1 * num2;

	printf("%u\n", result);

	return (0);
}
