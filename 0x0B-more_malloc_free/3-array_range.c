#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -creates array in range
 * @min: min number
 * @max: max number
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i - min] = i;
	return (p);
}
