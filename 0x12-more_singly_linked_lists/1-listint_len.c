#include "lists.h"

/**
 * listint_len - calculate length list
 * @h: node
 * Return: 1 if its a node
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + listint_len(h->next));
	}

}
