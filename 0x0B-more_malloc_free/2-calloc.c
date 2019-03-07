#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocation memory
 * @nmemb: number of members
 * @size: size of each member on bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (!(nmemb || size))
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
