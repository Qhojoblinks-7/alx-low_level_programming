#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that removes and returns the value of the head node
 * @head: a pointer to a pointer to the head of the list
 * Return: the value of the removed head node
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	value = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (value);
}
