#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked list
 * @h: a pointer to a list
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	int nodeNum = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeNum++;
	}
	return (nodeNum);
}
