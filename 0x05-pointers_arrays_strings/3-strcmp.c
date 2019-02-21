#include "holberton.h"
/**
 * _strcmp - compare size
 * @s1: string 3
 * @s2: string 2
 * Return: <1 if s1 <s2  >1 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int iterator = 0;

	while(s1[iterator] == s2[iterator] && (!s1[iterator] && !s2[iterator]))
	{
		iterator++;
	}
	return (s1[iterator] - s2[iterator]);
}
