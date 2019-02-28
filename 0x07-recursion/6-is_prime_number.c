#include "holberton.h"
/**
 * is_prime_number - return if it's prime
 * @n: number to calculate
 * Return: 1 if its prime 0 if not
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		if (number_is_prime(n, n - 1) == 1)
		{
			return (1);
		}

	}
	return (0);
}
/**
 * number_is_prime - calculate the prime
 * @base: base num
 * @num: num iterate
 * Return: times base its divided
 */
int number_is_prime(int base, int num)
{
	if (num == 1)
	{
		return (1);
	}
	else if (base % num == 0)
	{
		return (1 + number_is_prime(base, num - 1));
	}
	else
	{
		return (number_is_prime(base, num - 1));
	}
}
