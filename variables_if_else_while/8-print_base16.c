#include <stdio.h>
#include <unistd.h>

/**
 * print_base16 - Prints the numbers 0-9 and letters a-f in hexadecimal
 *                format followed by a space
 *
 * Return: void
 */

void print_base16(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			write(1, &('0' + i), 1);
		}
		else
		{
			write(1, &('a' + (i - 10)), 1);
		}
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_base16();
	return (0);
}
