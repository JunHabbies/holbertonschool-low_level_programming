#include "main.h" // Assumant que la fonction swap est déclarée ou définie ici

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void rev_string(char *s)
{
    if (s == NULL)
        return;

    char *start = s;
    char *end = s;

    // Trouver la fin de la chaîne
    while (*end != '\0')
    {
        end++;
    }

    end--; // Déplacer end d'un pas pour pointer le dernier caractère avant le '\0'

    // Inverser la chaîne en échangeant les caractères à partir des extrémités
    while (start < end)
    {
        swap(start, end);
        start++;
        end--;
    }
}

