#include "lists.h"

/**
 * insert_dnodeint_at_index - insert in specific index
 * @h: header of the list
 * @idx: index to insert
 * @n: number
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_element, *aux = *h;
	unsigned int current_index = 0;

	if (*h == NULL)
	{
		*h = malloc(sizeof(dlistint_t));
		if (!*h)
			return (NULL);
		(*h)->n = n;
		(*h)->prev = NULL;
		(*h)->next = NULL;
		return (*h);
	}
	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
		return (NULL);
	while (aux->next)
	{
		if (current_index == idx)
		{
			new_element->n = n;
			new_element->prev = aux->prev;
			new_element->next = aux;
			if (new_element->prev)
				new_element->prev->next = new_element;
			return (new_element);
		}
		aux =  aux->next;
		current_index++;
	}
	if (current_index == idx)
	{
		new_element->n = n;
		new_element->prev = aux->prev;
		new_element->next = aux;
		if (new_element->prev)
			new_element->prev->next = new_element;
		return (new_element);
	}
	return (NULL);
}
