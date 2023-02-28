#include "main.h"

/**
* puts2 - prints every other character od a string.
* @str: The string to be printed
*/

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);

		i++;
	}
	_putchar('\n');

}
