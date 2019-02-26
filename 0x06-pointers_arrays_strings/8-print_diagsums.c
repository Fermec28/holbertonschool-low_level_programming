#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - print sum of diag
 * @a: array to be manipulater
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	unsigned int diag1 = 0;
	unsigned int diag2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag1 += *(a + (i * size) + j);
			if ((i + j) == size - 1)
				diag2 += *(a + (i * size) + j);
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
