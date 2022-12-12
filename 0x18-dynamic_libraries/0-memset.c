#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: n
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
