#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The starting number
 * Return: The factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (factorial(n - 1) * n);
}
