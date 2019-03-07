#include "holberton.h"

/**
 * _calloc -
 * @nmemb: number of members
 * @size: size of each member on bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;

	if (nmemb && size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}
