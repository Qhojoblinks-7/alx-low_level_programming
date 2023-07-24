#include <stdio.h>
#include "main.h"

/**
 * rev_string -  A function that reverses a string
 *
 * @s: the string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	char temp; /* to store string temprarily */
	int length; /* to help check the length of the string */
	int start = 0; /* to mark the begining of the string */
	int end = 0; /* to mark the end of the string */
	int i;
	/* calculating the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}
	end = length -1;

	/* now we do the swapping */
	while (start < end)
	{
		temp = s[start]; /* the string at the begining is stored in tmp */
		s[start] = s[end]; /* the string at the end is swapped to begin */
		s[end] = temp; /* the begining of the string is now stored at the end */
		start++; /* move to the next character */
		end--; /* move to the next character backwards */


		/* printing the reversed string */
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		_putchar('\n');
	}
}
