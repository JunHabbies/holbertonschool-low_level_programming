#include <stdio.h>

/**
 * Fonction pour inverser une chaîne de caractères.
 * Parameters:
 *   s: Pointeur vers la chaîne de caractères à inverser.
 * Returns: void
 */
void rev_string(char *s) {
	// Vérifier si le pointeur est NULL
	if (s == NULL) {
		return;
	}

	// Trouver la longueur de la chaîne
	int length = 0;
	while (s[length] != '\0') {
		length++;
	}

	// Inverser la chaîne en utilisant un tableau temporaire
	for (int i = 0; i < length / 2; i++) {
		char temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

