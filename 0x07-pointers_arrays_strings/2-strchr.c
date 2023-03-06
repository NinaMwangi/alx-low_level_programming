#include "main.h"

/**
 * _strchr - finds a charater in a string
 * @s: String
 * @c: character to search
 * Return: Pointer to the first occurrence of c in string s
**/

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}

	if (*s == c)
		return (s);

	return (0);
}
