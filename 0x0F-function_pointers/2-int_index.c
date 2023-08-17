#include <stdio.h>
#include "main.h"

/**
 * cmp - a function that compare objects
 * @num: the object to find
 * Return: the object
 */

int cmp(int num)
{
	int i = 3;

	if (i == num)
	{
		return (num);
	}
	else
	{
		return (-1);
	}
}


/**
 * int_index - a function that searches for an int
 * @array: array of functions
 * @size: size of array
 * @cmp: a function that compares objects
 * Return: the nuber if found else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (array[i]);
		}
	}
	return (-1);
}
