#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the character to be eveluated
 */

void rev_string(char *s)
{
	int m, n, len;
		m = 0;

	while (s[m] != '\0')
	{
		_putchar(s[m]);
		m++;
	}

	len = m;
		for (n = len - 1; n >= 0; n--)
		{
			_putchar(s[n]);
		}
		_putchar('\n');
}
