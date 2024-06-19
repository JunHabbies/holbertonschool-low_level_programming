#include <stdio.h>

/**
 * print_base16 - Prints all hexadecimal digits in lowercase followed by newline
 */

void print_base16(void)
{
	for (int i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			prittf("%c ", '0' + i);
		}
		else
		{
			printf("%c ", 'a' + (i - 10));
		}
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	print_base16();
	return (0);
}

