#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list
 * @h: a pointer to the linked list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next)
	{
		num++;
	}
	return (num);
}
