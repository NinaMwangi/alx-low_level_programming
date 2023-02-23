#include "main.h"

/**
 * void print_numbers - prints numbers from 0 to 0
 * Description: The for loop iterates through the sequence
 * Return: 0 upto 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
