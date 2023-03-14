#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two numbers
 * @argc: the number of argument
 * @argv: the string of arduments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int multiply = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	
	multiply = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiply);
	return (0);
}
