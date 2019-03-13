#include "function_pointers.h"

/**
 * array_iterator - aplies function to each array element
 * @array: array
 * @size: size
 * @action: function
1 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
