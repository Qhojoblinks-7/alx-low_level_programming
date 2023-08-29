#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees memeory allocated
 * to a node
 * @head: the head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{

		temp = head;

		head = head->next;
		free(temp);
	}
}
