#include "main.h"

/**
 * reverse_array - a function that reverses the content of a an integer
 * @a: array to be reversed
 * @n: number of element in the array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int m, b, temp;

	b = n - 1;

	for (m = 0; m < n / 2; m++)
	{
		temp = a[m];
		a[m] = a[b];
		a[b--] = temp;
	}
}
