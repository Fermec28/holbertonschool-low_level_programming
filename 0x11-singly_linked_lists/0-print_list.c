#include "lists.h"

/**
 * print_list - function to print a list
 * @h: node
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[%d] %p\n", 0, h->str);
	else
		printf("[%d] %s\n", h->len, h->str);
	return (1 + print_list(h->next));
}
