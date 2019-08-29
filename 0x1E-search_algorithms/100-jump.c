#include "search_algos.h"
#include<math.h>
/**
 * jump_search - jump search algorithm
 * @array: pointer to first element of array
 * @size: size of array
 * @value: target value
 * Return: index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, i = 0;

	if (!array)
		return (-1);
	step = sqrt(size);
	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);
	step = i - step;
	while (step <= i && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step++;
	}
	return (-1);
}
