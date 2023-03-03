#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13
 * @str: the string to encode
 *  Return: the string encoded
 */

char *rot13(char *str)
{
	char *c = str;
	char i;


	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = ((c[i] - 'a' + 13) % 26) + 'a';
		}
		else if (c[i] >= 'A' && c[i] <= 'Z')
		{
			c[i] = ((c[i] - 'A' + 13) % 26) + 'A';
		}
	}
	return (str);
}
