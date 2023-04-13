#include "search_algos.h"

int mod_binary_search(int *array, int value, int begin, int end)
{
	int mid = 0, temp = 0;

	while (begin <= end)
	{
		temp = begin;
		printf("Searching in array: ");
		while (temp <= end)
		{
			printf("%d", array[temp]);
			if (temp != end)
			printf(", ");
			temp++;
		}

		printf("\n");
		mid = (end + begin) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			begin = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}

int exponential_search(int *array, size_t size, int value)
{
	int expo = 1, min = 0;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (expo < (int)size && array[expo] < value)
	{
		printf("Value checked array[%d] = [%d]\n", expo, array[expo]);
		expo *= 2;
	}

	if (expo + 1 < (int)size)
		min = expo;
	else
		min = (int)size - 1;

	printf("Value found between indexes [%d] and [%d]\n", expo / 2, min);

	return (mod_binary_search(array, value, expo / 2, min));
}
