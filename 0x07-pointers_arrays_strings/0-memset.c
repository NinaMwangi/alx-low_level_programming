#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Array
 * @b: constant character
 * @n: Number of bytes
 * Return: The array filled with constant
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
