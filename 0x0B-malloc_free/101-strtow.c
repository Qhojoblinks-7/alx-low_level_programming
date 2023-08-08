#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * strtow - a function that splits a string into words.
 * @str: a pointer to to the address of the string to splite
 * Return: a pointer
 */

char **strtow(char *str)
{
	int numOfWords = 0;
	char **words = NULL;
	int i, j, k, l;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			numOfWords++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
		}
	}

	words = (char **)malloc((numOfWords + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	i = 0, j = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		k = 0;

		while (str[i + k] != ' ' && str[i + k] != '\0')
		{
			k++;
		}

		words[j] = (char *)malloc((k + 1) * sizeof(char));

		if (words[j] == NULL)
		{
			for (l = 0; l < j; l++)
			{
				free(words[l]);
			}
			free(words);
			return (NULL);
		}

		for (k = 0; str[i] != ' ' && str[i] != '\0'; k++, i++)
		{
			words[j][k] = str[i];
		}
		words[j][k] = '\0';
		j++;
	}
	words[j] = NULL;
	return (words);
}
