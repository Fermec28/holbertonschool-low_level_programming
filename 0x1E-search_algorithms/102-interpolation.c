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
	size_t lo = 0, hi = (size - 1);

	if (!arr)
		return (-1);
	while (lo <= hi && value >= arr[lo] && value <= arr[hi])
	{
		size_t pos;

		printf("Value checked array[%lu] = [%d]\n", lo, arr[lo]);
		if (lo == hi)
		{
			if (arr[lo] == value)
				return (lo);
			return (-1);
		}
		pos = lo + (((double)(hi - lo) /
				 (arr[hi] - arr[lo])) * (value - arr[lo]));

		if (arr[pos] == value)
			return (pos);
		if (arr[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
