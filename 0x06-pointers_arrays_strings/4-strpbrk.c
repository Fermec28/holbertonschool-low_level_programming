#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: Source string
 * @accept: char to be compared
 * Return: length to be compared
 */
char *_strpbrk(char *s, char *accept)
{
	int i_s = 0;
	int i_accept = 0;
	int ocurrence = -1;

	while (s[i_s])
	{
		while (accept[i_accept])
		{
			if (s[i_s] == accept[i_accept])
			{
				if (ocurrence == -1)
					ocurrence = i_s;
				else if (i_s < ocurrence)
					ocurrence = i_s;
				break;
			}
			i_accept++;
		}
		i_accept = 0;
		i_s++;
	}

	return (ocurrence != -1 ? s + ocurrence : 0);
}
