#include "lists.h"

/**
 * print_dlistint - print elements
 * @h: header list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
