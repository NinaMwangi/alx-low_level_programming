#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched.
 * Return: If a set matches - a pointer to the matched byte.
 *         if no set matches - Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}

	return (0);
}
