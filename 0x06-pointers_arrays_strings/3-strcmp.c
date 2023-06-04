#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function that compares two strings
 * it returns 0 if the strings are the same, -1 if
 * s1 is less than s2 and 1 if s1 is graeter that s2.
 *
 * @s1: the first string
 * @s2: the second string
 * Return:0, -1 or 1
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;


	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] < s2[a])
		{
			return (-15);
		}

		else if (s1[a] > s2[a])
		{
			return (15);
		}
		a++;

	}

	if (s1[a] == '\0' && s1[a] == '\0')
	{
		return (0);
	}
	else if (s1[a] == '\0')
	{
		return (-15);
	}

	else
	{
		return (15);
	}
}
