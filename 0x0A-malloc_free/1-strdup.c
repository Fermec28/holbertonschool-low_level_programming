#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicate string
 * @str: size of array
 * Return: pointer to copy array
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;
	unsigned int size;

	for (size = 0; *(str + size); size++)
	{
	}
	if (!str || !*str)
	{
		return (NULL);
	}
	else
	{
		p =  malloc(sizeof(char) * (size + 1));
		if (p == NULL)
			return (NULL);
		for (i = 0; i <= size; i++)
			p[i] = *(str + i);
	}
	return (p);
}
