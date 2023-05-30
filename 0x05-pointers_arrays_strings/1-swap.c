#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps two integers.
 *
 * @a: first pointer to an int
 * @b: second pinter to an int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a; /* the value in *a is now given to temp */
	*a = *b; /* the value in *b is now given to *a */
	*b = temp; /* the value in temp is now given to *b */
}
