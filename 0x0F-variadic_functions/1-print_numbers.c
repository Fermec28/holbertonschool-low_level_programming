#include "variadic_functions.h"

/**
 * print_numbers - print n numbers
 * @separator: separator each number
 * @n:  number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iterator;
	va_list va;

	if (!(separator == NULL || n <= 0))
	{
		va_start(va, n);
		for (iterator = 0; iterator < n - 1; iterator++)
		{
			printf("%d%s", va_arg(va, int), separator);
		}
		printf("%d", va_arg(va, int));
		va_end(va);
	}
	printf("\n");
}
