#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  argstostr - a function that concatenates all the arguments of your program.
 *  @ac: number of arguments
 *  @av: array of arguments
 *  Return: 0 or NULL
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, position = 0;
	int len;
	char *result;

	while (av[len] != NULL)
	{
		len++;
	}

	for (i = 0; i < ac; i++)
	{
		total_length += len + 1;
	}

	result = (char *)malloc(total_length * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[position] = av[i][j];
			position++;
		}
		result[position] = '\n';
		position++;
	}
	result[position] = '\0';
	return (result);
}
