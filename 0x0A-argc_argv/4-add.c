#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Check if a string represents a positive number
 * @str: The string to check
 *
 * Return: 1 if the string represents a positive number, otherwise 0
 */

int is_positive_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}

	return (1);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there was an error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return(1);

		}

		num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}


	printf("%d\n", sum);
	return (0);
}
