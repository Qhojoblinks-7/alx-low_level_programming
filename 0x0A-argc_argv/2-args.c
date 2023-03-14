#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints all argument recieved 
 * @argc: number of arguments
 * @argv: the strings of the argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
