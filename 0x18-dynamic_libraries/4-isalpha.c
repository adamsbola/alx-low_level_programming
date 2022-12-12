#include "main.h"

/**
 * _isalpha - checks both uppercase and lowercase and gives a value of 1
 * @c: value to be checked
 * Return: always 1 success
 */

int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower = lower + 1)
	{
		for (upper = 'A'; upper <= 'Z'; upper = upper + 1)
		{
			if (c == lower || c == upper)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
