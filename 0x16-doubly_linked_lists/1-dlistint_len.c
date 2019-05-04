#include "lists.h"

/**
 * dlistint_len - calculate length list
 * @h: head list
 * Return: length list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}
