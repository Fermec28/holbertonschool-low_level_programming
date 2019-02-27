#include "holberton.h"
/**
 *  factorial - returns the factorial of number
 * @n: number
 * Return: factorial
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
