#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string
 *
 * @s:a string
 * @c: the character to be located
 * Return: s on success and NULL otherwise.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		i++;
	}

	return (NULL);
}
