#include "holberton.h"

/**
 * binary_to_uint - binary converter
 * @b: binary number in string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, number = 0;

	while (b[i])
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
		number = number << 1;
		number = number | (b[i] - '0');
		i++;
	}

	return (number);
}
