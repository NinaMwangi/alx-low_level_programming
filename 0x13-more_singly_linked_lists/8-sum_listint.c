#include "lists.h"

/**
 * sum_listint - Returns the sum of all data in a linked list.
 * @head: The head of the linked list.
 * Return: 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
