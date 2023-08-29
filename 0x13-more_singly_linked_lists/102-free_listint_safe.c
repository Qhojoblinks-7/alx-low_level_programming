#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - safely frees a listint_t linked list
 * @h: a pointer to a pointer to the head of the list
 * Return: the number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	while(*h == NULL)
	{
		listint_t *node = *h;
		*h = (*h)->next;
	}

	if (node != NULL && node->next == node)
	{
		free(node);
		count++;
		break;
	}
	free(node);
	count++;
}
