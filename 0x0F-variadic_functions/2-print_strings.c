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
	char *p;

	if (!(n <= 0))
	{
		va_start(valist, n);
		for (iterator = 0; iterator < n; iterator++)
		{
			p = va_arg(valist, char*);

			if (p == NULL)
				printf("%p", p);
			else
				printf("%s", p);
			if (separator != NULL && iterator < n - 1)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}
