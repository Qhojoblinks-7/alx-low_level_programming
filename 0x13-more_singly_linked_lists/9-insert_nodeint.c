#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the head of the list
 * @idx: the index at which the new node should be inserted
 * @n: the value to be assigned to the new node
 * Return: a pointer to the new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *currentNode, *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	currentNode = *head;

	while (i < idx - 1 && currentNode != NULL)
	{
		currentNode =currentNode->next;
		i++;
	}

	if (currentNode == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->next = currentNode->next;
	currentNode->next = temp;

	return (temp);
}
