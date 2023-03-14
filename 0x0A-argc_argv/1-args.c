#include <stdio.h>

/**
 * main - a function that prints the number of argument pessed into it
 * it prints a number followed by a new line
 * @argc: the number of agument passed
 * @argv: the string of the argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
