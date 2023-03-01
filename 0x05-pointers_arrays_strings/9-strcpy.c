#include "main.h"

/**
 * *_strcpy - copies the string pointed to
 * including terminating null byte,
 * to the buffer pointed at
 * @dest: pointer to the buffer
 * @src: the string poited at
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

		return (dest);
}

