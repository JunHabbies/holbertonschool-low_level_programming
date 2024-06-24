#include "main.h"

/**
 * print_line - Affiche une ligne de underscores suivie d'un saut de ligne.
 * @n: Nombre de underscores à afficher.
 */
void print_line(int n)
{
	int i;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

