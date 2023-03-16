#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array if integers
 * @min: minimum values
 * @max: maximum values
 * Return: pointer to the new array.
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
