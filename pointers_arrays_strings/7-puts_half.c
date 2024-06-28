#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string, followed by a new line.
 * @str: pointer to the string to be printed
 *
 * Description: If the number of characters is odd, the function should print
 *the last n characters of the string, where n =(length_of_the_string - 1)/ 2
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting point for the second half */
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2 + 1;
	}

	/* Print the second half of the string */
	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	/* Print a new line */
	putchar('\n');
}
