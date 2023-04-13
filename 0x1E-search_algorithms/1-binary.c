#include "search_algos.h"

int binary_search(int *array, size_t size, int value){
	int begin = 0, end = (int)size -1;
	int mind = 0,temp = 0;
	if (array == NULL)
	      return (-1);
	while (begin <= end){
	       temp = begin;
       	       printf("searching in array: ");
	       while (temp <= end)
	       {
		      printf("%d", array[temp]):
                      if (temp != end)
			    printf(", ");
		      temp++;}
	}
	printf("\n");
	mid = (end + begin) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
	      begin = mid +1;
	else
		end = mid - 1;
 }
 return (-1);
}
