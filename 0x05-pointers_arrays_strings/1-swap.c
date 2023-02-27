#include "main.h"

/**
 *swap_int - Swaps the value on two integers
 * @a: The 1st int to be swapped
 * @b: The 2nd int to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
