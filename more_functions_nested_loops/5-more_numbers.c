#include "main.h"

/**
 * more_numbers - Prints numbers 0-9, repeated 10 times, followed by a newline.
 */

void more_numbers(void)
{
	int a;
	char b;

	for (a = 1; a <= 10; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
