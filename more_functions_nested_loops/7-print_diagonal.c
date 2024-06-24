#include "main.h"

/**
 * print_diagonal - Dessine une ligne diagonale sur le terminal.
 * @n: Nombre de fois que le caractère \ doit être imprimé.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
