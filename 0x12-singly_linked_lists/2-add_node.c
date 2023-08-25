#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - a function that adds a node to the
 * begining of a node
 * @head: head node
 * @str: the string to be duplicated
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return(NULL);
	}

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return(NULL);
	}

	temp->len = strlen(str);
	temp-> *head;
	*head = temp;

	return (temp);
}
