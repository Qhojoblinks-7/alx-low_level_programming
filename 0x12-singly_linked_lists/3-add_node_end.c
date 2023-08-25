#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a node to the last node
 * head: the head node
 * @str: the string to be duplicated
 * Return: the address of thenew node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
		return (NULL);

	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);


	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		list_t *current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = temp;
	}
	return (temp);
}
