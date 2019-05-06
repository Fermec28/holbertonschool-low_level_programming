#include "holberton.h"
/**
 * *_strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: ending point to copy
 * Return: string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int iterator_dest;
	int iterator_src;

	for (iterator_dest = 0; dest[iterator_dest]; iterator_dest++)
	{
	}
	for (iterator_src = 0; src[iterator_src] && iterator_src < n; iterator_src++)
	{
		dest[iterator_dest + iterator_src] = src[iterator_src];
	}
	dest[iterator_dest + iterator_src] = '\0';
	return (dest);
}
