#include "variadic_functions.h"
/**
 * print_all - print according to format
 * @format: format to print
 */
void print_all(const char * const format, ...)
{
	int i_format = 0, i_struct = 0;
	op_t print[] = {
		{"c", print_char},
		{NULL,NULL}
	};
	va_list valist;

	if (format != NULL)
	{
		va_start(valist, format);
		while (format != NULL, format[i_format] )
		{
			i_struct = 0;
			while (print[i_struct].op != NULL)
			{
				if( format[i_format] == *(print[i_struct].op))
					print[i_struct].f(valist);
				i_struct++;
			}
			i_format++;
		}
	}
	printf("\n");
}
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
