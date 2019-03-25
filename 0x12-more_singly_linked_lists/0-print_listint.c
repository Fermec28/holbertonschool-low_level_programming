#include "lists.h"
/**
 * print_number - print any integer number
 * @number: number
 */
void print_number(int number)
{
	int aux;

	if (number < 0)
	{
		printf("%c", '-');
		aux = number / 10;
		print_number(-aux);
		aux = number % 10;
		print_number(-aux);
	}
	else
	{
		if (number > 9)
			print_number(number / 10);
		printf("%c", (number % 10) + '0');
	}

}
/**
 * print_listint - print all elements in list
 * @h: node
 * Return: return length of list
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		return (1 + print_listint(h->next));
	}
}
