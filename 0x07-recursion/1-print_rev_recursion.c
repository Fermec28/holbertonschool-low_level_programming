#include "holberton.h"
/**
 * _print_rev_recursion - put in recursion reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
	}
}
