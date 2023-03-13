#include "main.h"

/**
 * _strcpy - a function that copies a string from one location
 * to another in memory.
 * it takes two parameters dest and src pointed to the 
 * destination buffer and the source string repectively
 * this is done by iterating through src and coping each character
 * to the corresponding dest buffer till a null character is 
 * printed and returns a pointer to the destination buffer
 * @dest pointer to the buffer
 * @src: the string pointed at
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int length, j;
	
	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (j = 0; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
