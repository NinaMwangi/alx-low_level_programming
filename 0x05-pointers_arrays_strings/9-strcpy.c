#include "main.h"

/**
* _strcpy - copies one string onto another
* @dest: Where to copy to
* @src: Where to copy from
* Return: Value of dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
