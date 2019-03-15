#include "variadic_functions.h"

/**
 * sum_them_all - sum arguments passed
 * @n: number of parammeters
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list valist;

	if (n <= 0)
		return (sum);
	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	return (sum);
}
