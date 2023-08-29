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
	listint_t *temp;
	listint_t *currentNode;
	unsigned int i = 0;

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

	currentNode = *head;

	while (i < index - 1 && currentNode != NULL)
	{
		currentNode = currentNode->next;
		i++;
	}

	if (currentNode == NULL || currentNode->next == NULL)
	{
		return (-1);
	}

	temp = currentNode->next;

	currentNode->next = temp->next;
	free(temp);

	return (1);
}
