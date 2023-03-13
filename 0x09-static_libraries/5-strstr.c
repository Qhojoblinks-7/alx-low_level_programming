#include "main.h"

/**
 * *_strstr -  a function that locates astring
 * The _strstr() function finds the first occurrence of
 * the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: where the of the substring needle is found
 * @needle: the substring that is to be found
 * the terminating null bytes \0 are not compared
 * Return: returns a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
