#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: string to be concatenated
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	result = (char *)malloc(sizeof(char) * n);
	if (result == NULL)
	{
		return (NULL);
	}

	while (s1 && s2[len1] != '\0')
	{
		len1++;
	}

	while (len2 < n && s2[i] != '\0')
	{
		len2++;
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}
