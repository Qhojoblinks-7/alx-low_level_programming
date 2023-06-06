#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - A function that that searches a string for any  byte
 *
 * @s: the string to search
 * @accept: the string to compare
 * Return: s on success or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}

		i++;
	}
	return (NULL);
}
