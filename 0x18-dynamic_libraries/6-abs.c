#include "main.h"

/**
 * _abs - print absolute integer
 * @c: an argument
 * Return: 0
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
