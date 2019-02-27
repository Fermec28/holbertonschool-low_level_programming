#include "holberton.h"
/**
 * _pow_recursion - returns the factorial of number
 * @x: base
 * @y: potencia
 * Return: pow
 */
int _pow_recursion(int x, int y)
{
	if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return (-1);
}
