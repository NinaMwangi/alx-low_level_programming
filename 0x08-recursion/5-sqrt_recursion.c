#include "main.h"

/**
 * _calc_sqrt - Returns the natural square root of a number
 * @n: The number to find the square root
 * @start: starting point
 * Return: Square root
 */

int _calc_sqrt(int n, int start)
{
	if (start * start > n)
		return (-1);
	if (start * start < n)
		return (_calc_sqrt(n, start + 1));
	else
		return (start);
}

/**
 * _sqrt_recursion - Returns the natural square root
 * @n: Number
 * Return: Square root
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (_calc_sqrt(n, 1));
}
