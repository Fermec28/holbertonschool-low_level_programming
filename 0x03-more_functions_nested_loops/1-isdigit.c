#include "holberton.h"

/**
 * int _isdigit - Function calculate digit
 * @c: number to evaluate
 *
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
