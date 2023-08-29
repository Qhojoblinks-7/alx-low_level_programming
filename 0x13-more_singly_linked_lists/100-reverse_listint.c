#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to a pointer to the head of the list
 * Return: a pointer to the new head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1 = NULL;
	listint_t *node2 = *head;

	while (node2 != NULL)
	{
		listint_t *next_node = node2->next;

		node2->next = node1;
		node1 = node2;
		node2 = next_node;
	}
	*head = node1;

	return (*head);
}
