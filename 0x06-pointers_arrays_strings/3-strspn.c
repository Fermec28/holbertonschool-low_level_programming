#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: Source string
 * @accept: char to be compared
 * Return: length to be compared
 */
char *s = "hello, world";
char *f = "oleh";
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i_s = 0;
	unsigned int i_accept = 0;
	int counter = 0;
	int flag = 1;

	while (s[i_s] && flag)
	{
		while (accept[i_accept])
		{
			if (s[i_s] == accept[i_accept])
			{
				counter++;
				break;
			}
			i_accept++;
		}
		if (accept[i_accept] == '\0')
			flag = 0;
		i_accept = 0;
		i_s++;
	}

	return (counter);
}
