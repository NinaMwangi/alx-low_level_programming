#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new space that contains copy of string
 * @str: The string to be copied.
 * Return: A pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[len] = '\0';

	return (copy);
}
