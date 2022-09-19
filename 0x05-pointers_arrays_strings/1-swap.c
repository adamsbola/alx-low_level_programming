#include  "main.h"

/**
 * _strncat - Concatène deux chaînes en utilisant au maximum
 * un nombre d’octets saisi à partir de src.
 * @dest : Chaîne à ajouter.
 * @src : Chaîne à ajouter à dest.
 * @n : Nombre d’octets de src à ajouter à dest.
 *
 * Retour : pointeur vers la chaîne résultante dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	tandis que (dest[index++])
		dest_len++;

	pour (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	retour (dest);
}
