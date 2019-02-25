#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: Source string
 * @c: char to be compared
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	unsigned int iterator = 0;

	while (s[iterator] != c)
	{
		if (!s[iterator])
			return (0);
		iterator++;
	}
	return (&s[iterator]);
}
