#include "holberton.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: string concatenated
 */
char *_strcat(char *dest, char *src)
{
	int iterator_dest;
	int iterator_src;

	for (iterator_dest = 0; dest[iterator_dest]; iterator_dest++)
	{
	}
	for (iterator_src = 0; src[iterator_src]; iterator_src++)
	{
		dest[iterator_dest + iterator_src] = src[iterator_src];
	}
	dest[iterator_dest + iterator_src] = src[iterator_src];
	return (dest);
}
