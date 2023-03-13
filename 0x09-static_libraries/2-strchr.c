#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * returns a pointer to the first occurance of the character c
 * in string s or null if the chracter is not found
 * @s: the pointer of the string
 * @c: the character in the string
 * Return: returns a pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
