#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of the list.
 * @head: The beginning of the node.
 * @index: The index of the node.
 * Return: NULL if node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	for (i = 0; head != NULL; i++, head = head->next)
		if (i == (int) index)
			return (head);

	return (NULL);
}
