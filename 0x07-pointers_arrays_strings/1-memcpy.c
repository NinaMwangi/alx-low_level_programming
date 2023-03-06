#include "main.h"

/**
 * _memcpy - copies bytes from source to destination
 * @src: Source memory
 * @dest: Destination memory
 * @n: number of bytes to copy
 * Return: Destination memory
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
