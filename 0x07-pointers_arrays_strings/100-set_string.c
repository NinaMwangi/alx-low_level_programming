#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to pointer
 * @to: The Char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
