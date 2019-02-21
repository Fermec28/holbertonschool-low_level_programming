#include "holberton.h"
/**
 * *string_toupper - compare size
 * @s: array to be manipulated
 * Return: array
 */
char *string_toupper(char *s)
{
	int iterator;

	for (iterator = 0; s[iterator]; iterator++)
	{
		if (s[iterator] >= 'a' && s[iterator] <= 'z')
			s[iterator] = s[iterator] - 'a' + 'A';
	}
	return (s);
}
