#include "main.h"
#include <stdio.h>


/**
 * rot13 - a functionthat encodes a string using rot13.
 *
 * @str: a string
 * Return: 0
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = (str[i] >= 'A' && str[i] <= 'Z')
			? ((str[i] - 'A' + 13) % 26 + 'A')
			: (str[i] >= 'a' && str[i] <= 'z')
			? ((str[i] - 'a' + 13) % 26 + 'a')
			: str[i];
	}

	return (str);
}
		
