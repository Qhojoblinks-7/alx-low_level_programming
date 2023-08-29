#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - a function that finds the sum of the
 * data in a list
 * @head: the head of the list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int total;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
