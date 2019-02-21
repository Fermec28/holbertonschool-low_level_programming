#include "holberton.h"
/**
 * reverse_array - compare size
 * @a: array to be inverted
 * @n: length
 */
void reverse_array(int *a, int n)
{
	int iterator;
	int aux;

	for (iterator = 0; (n - iterator - 1) > iterator; iterator++)
	{
		aux = a[iterator];
		a[iterator] = a[n - iterator-1];
		a[n - iterator-1] = aux;
	}
}
