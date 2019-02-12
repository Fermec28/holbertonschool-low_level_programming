#include "holberton.h"
/**
 *print_alphabet_x10 - Print alpahbet x10
 *
 *
 */
void print_alphabet_x10(void)
{
	int num;
	int alpha;

	for (num = 0; num < 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar(10);
	}
}
