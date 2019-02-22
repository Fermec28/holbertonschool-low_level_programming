#include "holberton.h"
/**
 * *rot13 - change with rot13
 * @s: string to be manipulated
 * Return: string manipulated
 */
char *rot13(char *s)
{
	int iterator;
	int ikeys = 0;
	char keys[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char values[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int flag = 1;

	for (iterator = 0; s[iterator]; iterator++)
	{
		while (keys[ikeys] && flag)
		{
			if (s[iterator] == keys[ikeys])
			{
				s[iterator] = values[ikeys];
				flag = 0;
			}
			ikeys++;
		}
		ikeys = 0;
		flag = 1;
	}

	return (s);
}
