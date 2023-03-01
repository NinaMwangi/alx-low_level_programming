#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: The string to be changed
 * Return: A modified string
 */

char *string_toupper(char *str)
{
	char *s = str;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;

		s++;
	}

	return (str);
}
