#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13
 * @str: the string to encode
 *  Return: the string encoded
 */

char *rot13(char *str)
{
	char q[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char i, j;
	char *c = str;

		for (i = 0; c[i] != '\0'; i++)
		{
			for (j = 0; q[j] != '\0'; j++)
			{
				if (c[i] == q[j])
				{
					c[i] = y[j];
					break;
				}
			}
		}
	return (str);
}
