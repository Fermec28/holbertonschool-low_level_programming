#include "holberton.h"

/**
 * get_bit - get an specific bit
 * @n : number to extract the bit
 * @index: index to extract
 * Return: the index bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		return ( (n >> index) & 1);
	}
}
