#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 *
 * Description: This function takes a string as input and prints
 * it in reverse order, followed by a newline. It uses a pointer
 * to traverse the string to the end, then moves backward to
 * print each character.
 */

void print_rev(char *s)
{
	char *str = s;

	while (*str != '\0')
	{
		str++;
	}

	str--;

	while (str >= s)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
