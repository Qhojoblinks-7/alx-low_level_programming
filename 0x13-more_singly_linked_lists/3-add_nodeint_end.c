#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that addas a new node
 * to the end of a list
 * @head: a pointer to the adress of another pointer
 * @n: the new node
 * Return: the adress of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		listint_t *currentNode = *head;

		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = temp;
	}
	return (temp);
}
