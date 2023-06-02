#include "main.h"
#include <stdio.h>

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: the string
 * Return: an int
 */


char *cap_string(char *str)
{
	int size = 0;
	int cap_word = 1;

	while (str[size] != '\0')
	{
		if (str[size] == ' ' || str[size] == '\t' || str[size] == '\n'
				|| str[size] == '.')
		{
			cap_word = 1;
		}

		else if (cap_word && (str[size] >= 97 && str[size] <= 122))
		{
			str[size] = str[size] - (97 - 65);
			cap_word = 0;
		}

		else
		{
			cap_word = 0;
		}

		size++;
	}
	return (str);
}
