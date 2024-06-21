#include <main.h>

/**
 * print_last_digit - Prints the last digit of a number and returns it.
 * @n: The number whose last digit is to be printed.
 *
 * Return: The last digit of @n.
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = -lastdigit;
	}
		_putchar(lastdigit + '0');

	return (lastdigit);
}
