#include "lists.h"

/**
 * pop_listint - Deletes the head node of the list and returns the data.
 * @head: Beginning of the list.
 * Return: The head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res;

	if (*head == NULL)
		return (0);

	temp = *head;
	res = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (res);
}
