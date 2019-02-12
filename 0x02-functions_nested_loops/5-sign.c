#include "holberton.h"
/**
 * print_sign - sense if n is grater less or equal than 0
 *
 * @n: is a char to be evaluated
 *
 * Return: 1 if is n is grater less or equal than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
