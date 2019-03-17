#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(const char *data);
void print_integer(const char *data);
void print_float(const char *data);
void print_string(const char *data);
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
	void (*f)(const char *data);
} op_t;
#endif /* VARIADIC_FUNCTIONS_H */
