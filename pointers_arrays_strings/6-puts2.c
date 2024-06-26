#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first,
 *         followed by a newline.
 * @str: The string to print.
 */

void puts2(char *str)
{
	if (str == NULL)
		return;

	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
