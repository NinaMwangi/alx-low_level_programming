#include "lists.h"

/**
 * free_listint - Frees the list.
 * @head: The head of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
