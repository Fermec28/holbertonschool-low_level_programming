#include "holberton.h"
/**
 * is_prime_number - return if it's prime
 * @n: number to calculate
 * Return: 1 if its prime 0 if not
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n > 7)
	{
		while (n % divisor != 0 && divisor < n)
		{
			divisor++;
		}
		return (divisor == n ? 1 : 0);
	}
	else if (n == 1 || n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	else
		return (0);
}
