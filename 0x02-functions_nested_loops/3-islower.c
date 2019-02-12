#include "holberton.h"
/**
 * _islower - sense if the char is lowcase
 *
 * @c: is a char to be evaluated
 *
 * Return: 1 if is lowercase 0 if not
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}
