#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - print sum of diag
 * @a: array to be manipulater
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i,j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == j)
				diag1 += *(a + (i * size) + j);
			if ((i + j) == size - 1)
				diag2 += *(a + (i * size) + j);
		}
	}
	printf("%d, %d\n",diag1, diag2);
}
