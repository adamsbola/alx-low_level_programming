#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: argument
 * Return: 0
 */

int _atoi(char *s)
{
	int y = 0;
	unsigned int n = 0;
	int min = 1;
	int isi = 0;

	while (s[y])
	{
		if (s[y] == 45)
		{
			min *= -1;
		}

		while (s[y] >= 48 && s[y] <= 57)
		{
			isi = 1;
			n = (n * 10) + (s[y] - '0');
			y++;
		}

		if (isi == 1)
		{
			break;
		}
		y++;

	}
	n *= min;
	return (n);
}
