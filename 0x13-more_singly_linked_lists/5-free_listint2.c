#include "lists.h"

/**
 * free_listint2 - Frees the list and sets the head to NULL.
 * @head: The beginning of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
