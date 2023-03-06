#include "main.h"

/**
 * _strspn - gets the length of the prefix of the substring
 * @s: The string to be looked at
 * @accept: String containing the charactes to match
 * Return: The number of bytes in s that consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len, i, j;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[1] == accept[j])
			{
				len++;
				break;
			}
		}

		if (s[i] != accept[j])
			break;
	}
	return (len);
}
