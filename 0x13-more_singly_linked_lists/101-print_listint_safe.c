#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - safely prints all elements of a list
 * @head: a pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;

		if (head != NULL && head->next == head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
}

