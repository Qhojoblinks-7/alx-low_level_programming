#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the
 * begining of a node
 * @head: a pointer to the address of a pointer
 * @n: the node to be added
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;


	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;

	temp->next =  *head;
	*head = temp;

	return (temp);
}
