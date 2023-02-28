#include "main.h"

/**
 * _strlen - a function that retuens the lemght of a string
 * init lenght;
 * while s is an array of a of the string (i.e s{})
 * i is increamented
 * return the lenght
 * @s: string to evaluate
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int lenght;

	lenght = 0;

	while (s[lenght] != '\0')
	{
	lenght++;
	}
	return (lenght);
}

