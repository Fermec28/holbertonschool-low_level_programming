#include "search_algos.h"
/**
 * interpolation_search - searching with exponential algorithm
 * @arr: pointer to fisrt position
 * @size: size of array
 * @value: target value to search
 * Return: index
 */
int interpolation_search(int *arr, size_t size, int value)
{
	size_t lo = 0, hi = (size - 1), pos;

	if (!arr)
		return (-1);
	while (lo <= hi)
	{
		pos = lo + (((double)(hi - lo) /
				 (arr[hi] - arr[lo])) * (value - arr[lo]));
		if (pos > hi)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, arr[pos]);
		if (arr[pos] == value)
			return (pos);
		if (arr[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
