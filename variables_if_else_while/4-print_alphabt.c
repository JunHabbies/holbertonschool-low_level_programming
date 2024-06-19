#include <stdio.h>

/**
 * ft_print - Prints all lowercase letters from 'a' to 'z'
 *            except for 'e' and 'q'.
 */

void ft_print (void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			printf("%c", a);
		}
		a++;
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always returns 0 to indicate successful execution
 */

int main(void)
{
	ft_print();
	return (0);
}
