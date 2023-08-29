#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 * of a list
 * @h: a pointer to a list
 * Return: a pointer to a struct
 */

size_t print_listint(const listint_t *h)
{
	int nodeNum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeNum++;
	}
	return (nodeNum);
}
