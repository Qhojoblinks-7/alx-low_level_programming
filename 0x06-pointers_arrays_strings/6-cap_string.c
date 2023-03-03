#include "main.h"
#include <ctype.h>

/**
 * *cap_string - a function that capitalizes all words of strings
 * @str: the string to be modified
 * Return: the resulting string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i == 0 || isspace(str[i - 1]))
	{
	str[i] = toupper(str[i]);
	}
	else
	{
	str[i] = tolower(str[i]);
	}
	i++;
	}
	return (str);
}
