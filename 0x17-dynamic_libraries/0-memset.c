#include "holberton.h"

/**
 * _memset -  used to fill a block of memory with a particular value
 * @s: array, starting address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled starting from s to be filled
 *
 * Return: return array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*Iterate the array and insert value b until value n*/
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
