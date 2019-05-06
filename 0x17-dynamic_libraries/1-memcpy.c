#include "holberton.h"
/**
 * _memcpy - fill memory with srcstring
 * @dest: string to be filled
 * @src: string source
 * @n: n bytes of the memory area pointed
 * Return: string manipulated
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iterator;

	for (iterator = 0; iterator < n; iterator++)
	{
		dest[iterator] = src[iterator];
	}
	return (dest);
}
