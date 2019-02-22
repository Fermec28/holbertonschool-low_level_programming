#include "holberton.h"
/**
 * *leet - change for leet
 * @s: string to be manupulated
 * Return: string manipulated
 */
char *leet(char *s)
{
	int iterator;

	for (iterator = 0 ; s[iterator]; iterator++)
	{
		if (s[iterator] == 'a' || s[iterator] == 'A')
			s[iterator] = '4';
		if (s[iterator] == 'e' || s[iterator] == 'E')
			s[iterator] = '3';
		if (s[iterator] == 'o' || s[iterator] == 'O')
			s[iterator] = '7';
		if (s[iterator] == 't' || s[iterator] == 'T')
			s[iterator] = '0';
		if (s[iterator] == 'l' || s[iterator] == 'L')
			s[iterator] = '1';

	}

	return (s);
}
