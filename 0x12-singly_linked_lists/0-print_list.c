#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - a function that prints all elements
 * of a linked.
 * @h: a pointer to a structure cointaining elements
 * Return:nunber of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)

		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		num++;
	}
	return (num);
}
