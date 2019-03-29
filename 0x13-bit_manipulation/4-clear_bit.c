#include "holberton.h"

/**
 * clear_bit - set 0 in specific bit
 * @n: number
 * @index: index to set
 * Return: 1 if was succes -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
}
