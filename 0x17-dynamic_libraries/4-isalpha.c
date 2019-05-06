#include "holberton.h"
/**
 * _isalpha - sense if the char is lowcase
 *
 * @c: is a char to be evaluated
 *
 * Return: 1 if is lowercase 0 if not
 */
int _isalpha(int c)
{
	return (((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) ? 1 : 0);
}
