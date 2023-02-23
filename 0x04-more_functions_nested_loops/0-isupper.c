#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: is the character to be checked
 * Return: 1 if character is uppercase, 0 if anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
