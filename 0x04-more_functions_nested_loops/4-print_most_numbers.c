#include "main.h"

/**
 * void print_most_numbers -  prints number 0 to 9
 * Description: do not print 2 and 4
 */

void print_most_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar((i % 0) + '0');
	}
	_putchar('\n');
}
