#include "lists.h"

/**
 * list_len - length of list
 * @h: node
 * Return: 1 if its not null
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}
