#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Duplicate string
 * @width: widht array
 * @height: height array
 * Return: pointer to array2D
 */
int **alloc_grid(int width, int height)
{
	int **p, ip;
	int ij;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(width * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (ip = 0; ip < width; ip++)
	{
		p[ip] = malloc(sizeof(int) * height);
		if (p[ip] == NULL)
		{
			for (; ip >= 0; ip--)
				free(p[ip]);
			free(p);
			return (NULL);
		}
	}
	for (ip = 0; ip < width; ip++)
	{
		for (ij = 0; ij < height; ij++)
			p[ip][ij] = 0;
	}
	return (p);
}
