#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to print
 * Return: Length of array
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
