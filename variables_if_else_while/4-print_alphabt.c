#include <stdio.h>

// Fonction ft_print qui imprime toutes les lettres de 'a' à 'z'
// à l'exception des lettres 'e' et 'q'.

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

// Fonction principale main

int main(void)
{
        ft_print();
        return (0);
}
