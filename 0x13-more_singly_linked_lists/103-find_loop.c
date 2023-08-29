#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * find_listint_loop - finds the starting node of a loop in a list
 * @head: a pointer to the head of the list
 * Return: a pointer to the node where the loop starts, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowPointer = head;
	listint_t *fastPointer = head;

	while (fastPointer != NULL && fastPointer->next != NULL)
	{
		slowPointer = slowPointer->next;
		fastPointer = fastPointer->next->next;

		if (slowPointer == fastPointer)
		{
			slowPointer = head;

			while (slowPointer != fastPointer)
			{
				slowPointer = slowPointer->next;
				fastPointer = fastPointer->next;
			}
			return (slowPointer);
		}
	}

	return (NULL);
}
