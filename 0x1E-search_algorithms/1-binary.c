#include "search_algos.h"
/**
 * print_array - print array
 * @array: pointer to array
 * @size: size of array
 */
void print_array(int *array, size_t size)
{
	size_t iter = 0;

	printf("Searching in array:");
	while (iter < size)
	{
		printf(" %d", array[iter]);
		iter++;
		if (iter < size)
			printf(",");
	}
	printf("\n");
}


/**
 * binary_search - binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t pivote;

	if (array == NULL || *array > value)
		return (-1);
	print_array(array, size);
	if (size == 1 && *array == value)
		return (0);
	else if (size == 1 && *array < value)
		return (-1);

	pivote = size % 2 == 0 ? size / 2 : (size / 2) + 1;
	if (array[pivote - 1] == value)
	{
		return (pivote - 1 + binary_search(array + pivote - 1, 1, value));
	}
	else if (value < array[pivote - 1])
	{
		return (binary_search(array, pivote - 1, value));
	}
	else if (value > array[pivote - 1])
	{
		int aux;

		aux = binary_search(array + pivote, size - pivote,
				    value);
		if (aux < 0)
			return (-1);
		return (pivote + aux);
	}
	return (-1);
}
