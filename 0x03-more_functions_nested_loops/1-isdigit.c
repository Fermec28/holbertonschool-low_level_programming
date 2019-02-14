#include "holberton.h"

/**
 *  _isdigit - Function calculate digit
 * @c: number to evaluate
 *
 * Return: 1 if is digit 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
