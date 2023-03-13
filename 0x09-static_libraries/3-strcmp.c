#include "main.h"

/**
 * _strcmp - a function that compares wto strings
 * @s1: destimnation string
 * @s2: source string
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
			s1++;
			s2++;
	}
	return (*s1 - *s2);
}
