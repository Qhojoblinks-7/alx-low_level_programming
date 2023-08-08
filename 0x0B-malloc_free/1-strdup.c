#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory
 * @str: the string to be copied
 * Return: a poiter to the newly allocated memory
 */

char *_strdup(char *str)
{
	char *str_A;
	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	str_A = (char *)malloc((i + 1) * sizeof(char));

	if (str_A == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		str_A[j] = str[j];
	}
	str_A[j] = '\0';

	return (str_A);
}
