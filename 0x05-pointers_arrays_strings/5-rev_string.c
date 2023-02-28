#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the character to be eveluated
 */

void rev_string(char *s)
{
	char temp;
	int m, n, len;
		n = 0;
		len = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	len = len - 1;
		for (m = 0; m < len / 2; n++)
		{
			temp = s[m];
			s[m] = s[n];
			s[n--] = temp;
		}
}
