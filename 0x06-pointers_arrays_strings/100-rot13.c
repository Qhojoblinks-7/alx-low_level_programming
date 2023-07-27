#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * rot13 - a functionthat encodes a string using rot13.
 *
 * @str: a string
 * Return: 0
 */

char *rot13(char *str)
{
	int i;
	char *encoded_str;

	if (str == NULL)
		return NULL;

	int len = 0;
	while (str[len] != '\0)
	{
		len++;
	}
	encoded_str = (char *)malloc(sizeof(char) * (len + 1));
	if (encoded_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			encoded_str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			encoded_str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
		}
		else
		{
			encoded_str[i] = str[i];
		}
	}
	encoded_str[i] = '\0';

	return (encoded_str);
}
		
