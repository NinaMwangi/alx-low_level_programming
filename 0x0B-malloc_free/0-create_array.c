#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes.
 * @c: The value to be assigned to each character.
 * @size: Size of the array
 * Return: Back to the pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	*(ptr + i) = 0;

	return (ptr);
}
