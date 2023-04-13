#include "search_algos.h"

int recursive_binary(int *array, int value, int begin, int end)
{

	int mid = 0, temp = begin;

	if (begin > end)
		return (-1);

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
	
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	 else if (array[mid - 1] == value) 
		end = mid; 
	else if (array[mid] < value)
		begin = mid + 1;
	else
		end = mid;

	return (recursive_binary(array, value, begin, end));
}


int advanced_binary(int *array, size_t size, int value)
{
	int begin = 0, end = (int)size - 1;

	if (array == NULL)
		return (-1);

	return (recursive_binary(array, value, begin, end));
}
