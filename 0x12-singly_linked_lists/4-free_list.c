#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - a function the frees memory allocated
 * to a node
 * @head: the head of the linked list
 */

void free_list(list_t *head)
{
	while(head != NULL)
	{
		return;
	}

	list_t *temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
}
