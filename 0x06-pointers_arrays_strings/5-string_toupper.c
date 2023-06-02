#include "main.h"
#include <stdio.h>

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @str: the string
 * Return: an int
 */


char *string_toupper(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		if (str[size] >= 97 && str[size] <= 122)
		{
			str[size] = str[size] - (97 - 65);
		}
		size++;
	}
	return (str);
}
