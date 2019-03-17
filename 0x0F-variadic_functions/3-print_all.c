#include "variadic_functions.h"
/**
 * print_all - print according to format
 * @format: format to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	if (format != NULL)
	{
		while (format[i])
		{
			printf("%c\n", format[i]);
			i++;
		}
	}

}
