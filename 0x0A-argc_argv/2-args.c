#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments received.
 * @argc: Number of arguments in program
 * @argv: Array of pointers to the program
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
