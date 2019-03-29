#include "holberton.h"

/**
 * set_bit - set bit in index
 * @n: number
 * @index: index to set
 * Return: the number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		*n = (*n | (1 << index));
		return (1);
	}
}
