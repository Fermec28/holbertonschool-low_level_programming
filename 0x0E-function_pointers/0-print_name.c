#include "function_pointers.h"

/**
 * print_name - function to call another function
 * @name: string represent the name
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
