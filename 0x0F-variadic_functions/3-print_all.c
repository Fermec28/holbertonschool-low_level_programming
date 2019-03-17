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
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL,NULL}
	};
	va_list valist;

	va_start(valist, format);
	while (format != NULL && format[i_format] )
	{
		i_struct = 0;
		while (print[i_struct].op != NULL)
		{
			if( format[i_format] == *(print[i_struct].op))
			{
				print[i_struct].f(valist);
				if (format[i_format + 1] != '\0')
					printf(", ");
			}
			i_struct++;
		}
		i_format++;
	}
	printf("\n");
}
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
void print_integer(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
void print_string(va_list valist)
{
	printf("%s", va_arg(valist, char*));
}
