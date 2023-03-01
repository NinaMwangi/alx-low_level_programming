#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: String to be added to dest
 * @dest: string to be added on
 * @n: number of bytes from src to be added to dest.
 * Return: a pointer to the result of dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
