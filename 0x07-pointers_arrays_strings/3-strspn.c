#include "main.h"

/**
 * _strspn - A fuction that gets the length of a prifix
 * substring
 *
 * @s: main string
 * @accept: string to be compared
 * Return: bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	char c;
	unsigned int n = 0;
	int i = 0;

	while (s[n] != '\0')
	{
		i = 0;
		c = s[n];

		while (accept[i] != '\0')
		{
			if (accept[i] == c)
			{
				break;
			}
			i++;
		}

		if (accept[i] == '\0')
		{
			return (n);
		}

		n++;
	}
	return (n);
}
