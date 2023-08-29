#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of the node to be deleted
 * Return: 1 if successful, -1 if the node at the
 * index does not exist
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *currentNode = *head;
	unsigned int i = 0;

	while (i < index - 1 && currentNode != NULL)
	{
		currentNode = currentNode->next;
		i++;
	}

	if (currentNode == NULL || currentNode->next == NULL)
	{
		return (-1);
	}

	listint_t *temp = currentNode->next;

	currentNode->next = temp->next;
	free(temp);

	return (1);
}
