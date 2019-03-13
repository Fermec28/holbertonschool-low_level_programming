#include "function_pointers.h"

/**
 * int_index - return index
 * @array: array of integer
 * @size: size of array
 * @cmp: function to compare
 * Return: -1 no matches or size <= 0,index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
