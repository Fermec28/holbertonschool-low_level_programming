#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list valist);
void print_integer(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);
/**
 * struct op - Struct op
 *
 * @op: options c: char, i:integer, f:float, s: char
 * @data: data to print
 *
 */
typedef struct op
{
	const char * const op;
	void (*f)(va_list valist);
} op_t;
#endif /* VARIADIC_FUNCTIONS_H */
