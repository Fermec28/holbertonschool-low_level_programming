#include "lists.h"
/**
 * print_number - print any integer number
 * @n: number
 */
void print_number(int number)
{
	int aux;

	if (number < 0)
	{
		_putchar('-');
		aux = number / 10;
		print_number(-aux);
		aux = number % 10;
		print_number(-aux);
	}
	else
	{
		if (number > 9)
			print_number( number / 10);
		_putchar((number % 10) + '0');
	}

}
/**
 * print_listint - print all elements in list
 *
 * Return: return length of list
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	else
	{
		print_number(h->n);
		_putchar('\n');
		return (1 + print_listint(h->next));
	}
}
