#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a line.
 * @n: The starting number.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
}

