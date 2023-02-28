#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the character to be eveluated
 */

void rev_string(char *s)
{
	char *start, *end, tmp;

	if (s == NULL)
		return;


	start = s;
	end = s;

	while (*end != '\0')
		end++;

	end--;


	while (start < end)
	{
		tmp = *start;

		*start++ = *end;

		*end-- = tmp;
	}
}
