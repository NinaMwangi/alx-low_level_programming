#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: is the number of times the character is printed.
 * Print new line if n is 0 or less.
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
