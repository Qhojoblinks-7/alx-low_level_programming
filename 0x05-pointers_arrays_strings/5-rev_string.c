#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the character to be eveluated
 */

void rev_string(char *s)
{
	char temp;
	int m, n, len;
		m = 0;
		len = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	len = m;
		for (n = 0; n < len / 2; n++)
		{
			temp = s[m];
			s[m] = s[len];
			s[n--] = temp;
		}
}
