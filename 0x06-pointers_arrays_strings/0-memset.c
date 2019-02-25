#include "holberton.h"
/**
 * _memset - fill memory with constant byte
 * @s: string to be filled
 * @b: constant byte
 * @n: n bytes of the memory area pointed
 * Return: string manipulated
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iterator;

	for (iterator = 0; iterator < n; iterator++)
	{
		s[iterator] = b;
	}
	return (s);
}
