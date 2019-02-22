#include "holberton.h"
/**
 * *leet - change for leet
 * @s: string to be manupulated
 * Return: string manipulated
 */
char *leet(char *s)
{
	int iterator;
	int ikeys = 0;
	char keys[] = "aeotlAEOTL";
	int values[] = {4, 3, 7, 0, 1};

	for (iterator = 0; s[iterator]; iterator++)
	{
		while (keys[ikeys])
		{
			if (s[iterator] == keys[ikeys])
				s[iterator] = values[ikeys % 5] + '0';
			ikeys++;
		}
	}

	return (s);
}
