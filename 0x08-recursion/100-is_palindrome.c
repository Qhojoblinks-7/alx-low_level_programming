#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: a pointer to the string to be checked
 */

int is_palindrome(char *s)
{
	int len = 0, i = 0, j;

	while (s[len] != '\0')
	{
		len++;
	}
	j = len - 1;

	if (i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
		i++;
		j--;
	}

	return (1);
}

