#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: Source string
 * @c: char to be compared
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	unsigned int iterator;

	while (s[iterator] != c && s[iterator])
	{
		iterator++;
	}

	return (&s[iterator]);
}
