#include "lists.h"

/**
 * *add_nodeint_end - Adds a node at the end of the list.
 * @head: The head of the list.
 * @n: The integer in the new node.
 * Return: New address of the new node; otherwise NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
