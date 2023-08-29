#include <stdlib.h>
#include "lists.h"


/**
 * get_nodeint_at_index - a function that returns the node at a specified index
 * @head: a pointer to the head of the list
 * @index: the index of the node to retrieve
 * Return: a pointer to the node at the specified index, or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
