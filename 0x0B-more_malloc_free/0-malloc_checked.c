#include "holberton.h"

/**
 * malloc_checked - use exit
 *
 * Return: pointer that allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
