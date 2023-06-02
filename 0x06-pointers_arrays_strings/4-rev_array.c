#include <stdio.h>
#include "main.h"

/**
 * reverse_array - A function that prints the reverse of an
 * array of integers.
 *
 * @a: an array fo integers
 * @n: number of elements in the array
 */


void reverse_array(int *a, int n)
{
	int start = 0;
	int end, temp;

	end = n - 1;

	if (n <= 1)
	{
		return;
	}


	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}

}
