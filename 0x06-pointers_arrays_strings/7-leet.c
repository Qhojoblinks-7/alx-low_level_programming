#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: the resulting string
 */

char *leet(char *str)
{
	char *leet_char = "AaEeOoTtLl";
	char *leet_code = "4433007711";
	char *c = str;
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; leet_char[j] != '\0'; j++)
		{
			if (c[i] == leet_char[j] || c[i] == leet_char[j] + 32)
			{
				c[i] = leet_code[j];
				break;
			}
		}
	}
	return (str);
}
