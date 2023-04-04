#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at position index.
 * @head: The head of the list.
 * @index: The index to be deleted.
 * Return: 1 if successful, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *temp;

	for (i = -1; *head != NULL; i++)
	{
		if (i + 1 == (int) index)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			return (1);
		}

		head = &(*head)->next;
	}

	return (-1);
}
