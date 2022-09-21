#include  "main.h"

/**
 * leet - encoder la chaîne en 1337 leet
 * @s : chaîne à manipuler
 * Retour: chaîne
 */

char *leet(char *s)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	pour (j = 0; s[j] != '\0'; j++)
	{
		pour (i = 0; a[i] != '\0'; i++)
		{
			si (s[j] == a[i])
				s[j] = b[i];
		}
	}

	return (s);
}
