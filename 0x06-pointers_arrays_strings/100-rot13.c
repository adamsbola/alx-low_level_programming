#include  "main.h"

/**
 * rot13 - coder la chaîne à l’aide de rot13
 * @s : chaîne à encoder
 * Retour: chaîne codée
 */

char *rot13(char *s)
{

	int a[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', « l »,
		 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		  'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		    'W', 'X', 'Y', 'Z'};
	int b[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M'};
	int i, j;

	for (j = 0; s[j] != '\0'; j++) /*loop through string*/
	{
		i = 0;
		tandis que (a[i] != '\0' && s[j] != a[i]) /*loop through rot13 arr*/
			i++;
		if (s[j] == a[i]) /*if alpha correspond, défini sur index dans b arr*/
			s[j] = b[i];
	}

	retour(s);
