#include "holberton.h"
/**
 * is_palindrome - return if it's palindrome
 * @s: string
 * Return: 1 if its palindrome 0 if not
 */
int is_palindrome(char *s)
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
