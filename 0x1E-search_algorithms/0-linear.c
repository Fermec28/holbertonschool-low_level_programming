#include "search_algos.h"
/**
 * linear_search - linear search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t iter = 0;

	while(array && iter < size)
	{
		printf("Value checked array[%zu] = [%d]\n", iter, array[iter]);
		if(array[iter] == value)
			return iter;
		iter++;
	}
	return(-1);
}
