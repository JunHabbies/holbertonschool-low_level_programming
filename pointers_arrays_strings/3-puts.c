#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The string to print
 * @size: The size of the string
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
