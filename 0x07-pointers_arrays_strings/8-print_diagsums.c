#include "main.h"

/**
 * print_diagsums - a function that prints the diagonals of a
 * square matrix integer
 * @size: size of matrix
 * @a: matrix to be added
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum_y, sum_x;


	for (i = 0; i < size; i++)
	{
		sum_x += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum_y += a[i];
		a -= size;
	}


	printf("%d, %d\n", sum_x, sum_y);
}
