#include "holberton.h"
#include <stdio.h>
/**
 * wildcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if both strings are the same
 */
int wildcmp(char *s1, char *s2)
{
	printf("\n%c - %c\n", *s1, *s2);
		getchar();
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			return (1 && wildcmp(s1 + 1, s2 + 1));
		}
		if(*s2 == '*')
		{
			return (0 || wildcmp(s1 + 1, s2 + 1));
		}
		else
		{
			return ( wildcmp(s1 + 1, s2));
		}
	}
	return (1);
}
