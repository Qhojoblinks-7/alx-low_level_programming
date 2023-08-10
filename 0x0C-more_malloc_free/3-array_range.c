#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: the minimum number
 * @max: the maximum number
 * Return: a pointetr
 */

int *array_range(int min, int max)
{
	int *array;
	int num_elements, i;

	if (max < min)
	{
		return (NULL);
	}

	num_elements = max - min + 1;
	array = (int *)malloc(num_elements * sizeof(int));


	if (array != NULL)
	{
		for (i = 0; i < num_elements; i++)
		{
			array[i] = min + i;
		}
	}
	return (array);
}
