#include "man.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: memory to allocate
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
