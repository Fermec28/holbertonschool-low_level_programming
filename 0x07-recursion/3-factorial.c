#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to print
 * Return: Length of array
 */
int factorial(int n)
{
	if (n > 0)
	{
		if (n == 0 || n == 1)
			return (1);
		else
			return (n * factorial(n - 1));
	}
	else
		return (-1);
}
