#include <string.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * get_op_func - slect function to be performed
 * @s: string to make the function
 * Return: pointer function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
