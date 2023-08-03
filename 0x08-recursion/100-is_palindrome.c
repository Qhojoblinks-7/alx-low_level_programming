#include <stdio.h>
#include "main.h"

/**
 *string_length- to find the length of the srting
 * @s: a pointer to the string to be checked
 * Return: the size of the string
 */

int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + string_length(s + 1));
	}
}

/**
 * is_palindrome_recursive - function to check if the string is a palindrome
 * @s: the string to be checked
 * @start: the begining of the string
 * @end: the end of the string
 * Return: a pointer to a string
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}


/**
 * is_palindrome - a function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: a pointer to the string to be checked
 * Return: a pointer to an int
 */

int is_palindrome(char *s)
{
	int len = string_length(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
