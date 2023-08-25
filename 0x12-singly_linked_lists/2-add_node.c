#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - a function that adds a node to the
 * begining of a node
 * @head: head node
 * @str: the string to be duplicated
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(str);
	temp->next =  *head;
	*head = temp;

	return (temp);
}
