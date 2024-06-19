#include <stdio.h>

/**
 * ft_print - Affiche les lettres de 'a' à 'z'
 *
 * Description:
 * Cette fonction affiche les lettres de l'alphabet en minuscule
 * en utilisant la fonction printf pour chaque caractère.
 */

void ft_print (void)
{
	int a = 'a';

	while (a <= 'z')
	{
		printf("%c", a);
		a++;
	}
	printf("\n");
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
