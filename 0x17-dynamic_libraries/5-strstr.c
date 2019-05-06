#include "holberton.h"
#include <stdio.h>
/**
 * is_thesame - check if the string is te same
 * @string: source string
 * @substring: substring to be comparated
 * Return: 1 if is the same 0 if not
 */
int is_thesame(char *string, char *substring)
{
	int flag = 1;
	int cont = 0;

	while (substring[cont] && flag)
	{
		if (substring[cont] != string[cont])
			flag = 0;
		cont++;
	}

	return (flag);
}

/**
 * _strstr - locates a substring.
 * @haystack: Source string
 * @needle: substring
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i_s = 0;

	while (haystack[i_s])
	{
		if (is_thesame(&haystack[i_s], needle))
		{
			return (&haystack[i_s]);
		}
		i_s++;
	}

	return (NULL);
}
