#include <stdio.h>
#include <unistd.h>

/**
 * ft_print - Affiche les chiffres de '0' à '9'
 *
 * Description:
 * Cette fonction affiche les chiffres
 * en utilisant la fonction write pour chaque caractère.
 */

void ft_print (void)
{
	int a = '0';

	while (a <= '9')
	{
		write(1, &a, 1);
		a++;
	}
	write(1, "\n", 1);
}

/**
 * main - Fonction principale
 *
 * Description:
 * Fonction principale du programme qui appelle ft_print pour afficher
 * les lettres de l'alphabet et retourne 0
 *
 * Return: 0 si le programme s'exécute correctement
 */

int main(void)
{
	ft_print();
	return (0);
}
