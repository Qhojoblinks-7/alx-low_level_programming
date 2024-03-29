#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: the width of the matrix
 * @height: the height of the matrix
 * Return: a pointer to the matrix
 */



int **alloc_grid(int width, int height)
{
	int i, j, **matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = (int **)malloc(height * sizeof(int *));

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}

