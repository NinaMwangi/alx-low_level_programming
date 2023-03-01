#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: pointer of 1st str to be compared
 * @s2: pointer of 2nd str to be compared
 * Return: if str1 < str2 the negative difference
 *         if str1 == str 2, 0.
 *         if str1 > str2, the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
