#include "variadic_functions.h"

/**
 * print_strings - print multiple strings
 * @separator: separator
 * @n: numnber of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iterator;
	va_list valist;

	if (!(separator == NULL || n <= 0))
	{
		va_start(valist, n);
		for (iterator = 0; iterator < n - 1; iterator++)
		{
			printf("%s%s", va_arg(valist, char*), separator);
		}
		printf("%s\n", va_arg(valist, char*));
	}

}
