#include "holberton.h"
/**
 * *_strncpy - copy string
 * @dest: destination string
 * @src: source string
 * @n: ending point to copy
 * Return: string concatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i_dest;

	for (i_dest = 0; i_dest < n && src[i_dest]; i_dest++)
	{
		dest[i_dest] = src[i_dest];
	}
	while (i_dest < n)
		dest[n] = '\0';
	return (dest);
}
