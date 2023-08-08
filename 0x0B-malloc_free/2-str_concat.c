#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string two
 * Return: a pointer to the newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	while (s1[len1] != '\0' && s2[len2] != '\0')
	{
		len1++;
		len2++;
	}

	result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		result[i + j] = s2[j];
	}
	return (result);
}
