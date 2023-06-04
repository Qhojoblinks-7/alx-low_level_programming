#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337
 * a and A = 4, e and E = 3, o and O = 0, t and T = 7
 * and l and L = 1.
 *
 * @str: a string
 * Return: 0
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char leetChar[] = "aAeEoOtTlL";
	char leetDigit[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (leetChar[j] != '\0')
		{
			if (str[i] == leetChar[j])
			{
				str[i] = leetDigit[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
