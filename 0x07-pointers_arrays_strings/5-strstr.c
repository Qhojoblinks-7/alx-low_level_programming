#include "main.h"
#include <stddef.h>

/**
 * _strstr - A function that locates a substring
 *
 * @haystack: the string to be saerched
 * @needle: the string to be compared
 * Return: a pointer on success otherwise null
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (haystack[j] != '\0')
		{
			if (haystack[i + j] !=  needle[j])
			{
				break;
			}
			j++;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}

		i++;
	}
	return (NULL);
}
