#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - create grid
 * @ac: grid
 * @av: height array
 * Return: array
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, total++)
			;
		total++;
	}
	p = malloc((total + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, total++)
		{
			p[total] = av[i][j];
		}
		p[total] = '\n';
		total++;
	}
	p[total] = '\0';
	return (p);
}
