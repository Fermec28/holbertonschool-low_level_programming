#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: Source string
 * @accept: char to be compared
 * Return: length to be compared
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int iterator = 0;

	while (s[iterator] != c && s[iterator])
	{
		iterator++;
	}

	return (&s[iterator]);
}
