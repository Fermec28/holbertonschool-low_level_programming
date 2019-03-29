#include "holberton.h"

/**
 * flip_bits - bits to flip
 * @n: number1
 * @m: number 2
 * Return: number of bits;
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	n = (n ^ m);
	while (n)
	{
		if (n & 1)
			counter++;
		n = n >> 1;
	}
	return (counter);
}
