#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 * Return: 0 Alway (Sucess)
*/
int main(void)
{
	long int num = 612852475143;
	long int firstprime = 2;
	long int result;

	result = find_prime(num, firstprime);
	printf("%ld\n", result);
	return (0);
}
/**
 * find_prime - find the greater multiply prime
 * @num: num to calculate the prime
 * @prime: current prime
 * Return: the greater multiply prime
 */
long int find_prime(long int num, long int prime)
{
	long int nextprime = next_prime(prime);

	if (_isprime(num))
		return (num);
	else if (num % prime == 0)
		return (find_prime((num / prime), prime));
	else
		return (find_prime(num, nextprime));
}
/**
 * next_prime - Calculate the next prime
 * @num: current prime
 * Return: the nex prime
 */
long int next_prime(long int num)
{
	num++;
	return	(_isprime(num) ? num : next_prime(num));
}
/**
 * _isprime - Evaluate if a number is prime
 * @num: num to evaluate if is prime
 * Return: 1 if is prime 0 if not
 */
long int _isprime(long int num)
{
	long int divisor = 2;

	if (num > 7)
	{
		while (num % divisor != 0 && divisor < num)
		{
			divisor++;
		}
		return (divisor == num ? 1 : 0);
	}
	else if (num == 1 || num == 2 || num == 3 || num == 5 || num == 7)
		return (1);
	else
		return (0);
}
