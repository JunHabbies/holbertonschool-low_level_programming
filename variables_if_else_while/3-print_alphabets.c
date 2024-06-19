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
}

/**
 * ft_print_upper - Affiche les lettres de 'A' à 'Z' suivies d'un saut de ligne
 *
 * Description:
 * Cette fonction affiche les lettres de l'alphabet en majuscule
 * en utilisant la fonction printf pour chaque caractère, puis ajoute
 * un saut de ligne à la fin de l'affichage.
 */

void ft_print_upper(void)
{
	int a = 'A';

	while (a <= 'Z')
	{
		printf("%c", a);
		a++;
	}
	printf("\n");
}

/**
 * main - Fonction principale du programme
 *
 * Description:
 * Fonction principale qui appelle ft_print pour afficher les lettres
 * de l'alphabet en minuscule, puis ft_print_upper pour afficher les lettres
 * de l'alphabet en majuscule suivies d'un saut de ligne. Retourne 0 pour
 * indiquer une exécution normale du programme.
 *
 * Return: 0 si le programme s'est terminé correctement
 */

int main(void)
{
	ft_print();
	ft_print_upper();
	return (0);
}
