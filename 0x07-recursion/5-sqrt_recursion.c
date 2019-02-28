#include "holberton.h"
/**
 * _sqrt_recursion - returns the sqrt of number
 * @n: name
 * Return: sqrt(n) and -1 if doesn't have natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (_calculate_sqrt(n, 1));
	else if (n == 0)
		return (0);
	else
		return (-1);
}
/**
 * _calculate_sqrt - calculate sqrt of number
 * @base: base num
 * @num: num to cala pow
 * Return: num if numm is sqrt -1 if num*num is > than base
 */
int _calculate_sqrt(int base, int num)
{
	if ((num * num) == base)
	{
		return (num);
	}
	else if ((num * num) > base)
	{
		return (-1);
	}
	else
	{
		return (_calculate_sqrt(base, num + 1));
	}
}
