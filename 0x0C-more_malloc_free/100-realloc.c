#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer to reallocate
 * @old_size: the old allocated memory
 * @new_size: the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size = 0, i;
	unsigned char *old_ptr;
	unsigned char *new_ptr_bytes;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		old_ptr = (unsigned char *)ptr;
		new_ptr_bytes = (unsigned char *)new_ptr;


		if (old_size < new_size)
		{
			copy_size = old_size;
		}
		else
		{
			copy_size = new_size;
		}

		for (i = 0; i < copy_size; i++)
		{
			new_ptr_bytes[i] = old_ptr[i];
		}
		free(ptr);
	}
	return (new_ptr);
}
