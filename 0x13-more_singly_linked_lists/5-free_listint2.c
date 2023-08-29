#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a list and sets
 * the head to null
 * @head: the head to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
