#include "main.h"

/**
 * *_strpbrk - a function that searches for any of a set of byte
 * The _strpbrk() function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * Return: a pointer to the byte in s
 * @s: string where search is made
 * @accept: string where searched  bytes are located
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
