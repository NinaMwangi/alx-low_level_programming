#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in the linked list.
 * @h: head of the list.
 *
 * Return: The number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
