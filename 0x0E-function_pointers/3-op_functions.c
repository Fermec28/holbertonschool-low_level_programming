#include <stdio.h>
#include "function_pointers.h"
/**
 * op_add - add function
 * @a: number1
 * @b: number2
 * Return: add to numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - add function
 * @a: number1
 * @b: number2
 * Return: add to numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_add - add function
 * @a: number1
 * @b: number2
 * Return: add to numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - add function
 * @a: number1
 * @b: number2
 * Return: add to numbers
 */
int op_div(int a, int b)
{
	if(b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - add function
 * @a: number1
 * @b: number2
 * Return: add to numbers
 */
int op_mod(int a, int b)
{
	if(b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
