#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit- calculate  and print the last digit
 *
 * @n: is a number to calculate ;last digit
 *
 * Return: absoulute value of a number
 */
int print_last_digit(int n)
{
	int num;

	num = n % 10;
	num = num >= 0 ? num : -num;
	_putchar(num + 48);
	return (num);
}
