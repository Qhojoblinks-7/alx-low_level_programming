#include "main.h"

/**
 * swap_int - a function that swaps the value of an integer
 * @a: value to be printed
 * @b: value to be printed
 * Return Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
