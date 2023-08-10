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
	int i, total_size = nmemb * size;
	char *set_mem = 0;
	void *memory;

	memory = (char *)malloc(total_size * sizeof(char));
	if (memory == NULL)
	{
		return (NULL);
	}

	set_mem = (char *)memory;

	for (i = 0; i < total_size; i++)
	{
		set_mem[i] = 0;
	}
	return (memory);
}

