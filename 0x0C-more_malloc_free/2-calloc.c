#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an
 * array, using malloc.
 * @nmemb: number of memebers in the array
 * @size: size of the array
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int total_size = nmemb * size;

	void *memory;
	
	memory = (char *)malloc(total_size * sozeof(char));
	if (memory == NULL)
	{
		return (NULL);
	}

	char *set_mem = (char *)memory;
	for (i = 0; i < total_size; i++)
	{
		set_mem[i] = 0;
	}
	return (memory);
}

