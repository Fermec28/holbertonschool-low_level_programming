#include "holberton.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: string1
 * @s2: string2
 * @n: number of bite to copy
 * Return: New String
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size_s1 = 0, size_s2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size_s1] || s2[size_s2])
	{
		if (s1[size_s1])
			size_s1++;
		if (s2[size_s2])
			size_s2++;
	}
	size_s2 = (n >= size_s2) ? size_s2 : n;
	p = malloc(size_s1 + size_s2 + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size_s1 + size_s2 + 1; i++)
	{
		if (i < size_s1)
		{
			p[i] = s1[i];
		}
		else
		{
			p[i] = s2[i - size_s1];
		}
	}
	p[i] = '\0';
	return (p);
}
