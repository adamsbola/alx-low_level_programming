#include "search_algos.h"

/**
 * linear_search - Function that performs a linear search
 * to find the target value
 */
int linear_search(int *array, size_t size, int value)
{
	int position = 0;

	if (array == NULL)
		return (-1);

	/*
	 * Size is typecasted into an int, because negative numbers
	 * are allowed in the array and we need to compare our position
	 * in the array to the size of the array. Otherwise negative numbers
	 * end up giving us an incorrect number
	 */
	while (position < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);

		position++;
	}
	return (-1);
}
