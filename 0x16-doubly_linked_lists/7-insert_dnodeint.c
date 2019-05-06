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

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (!*head)
			return (NULL);
		*head->n = n;
		*head->prev = NULL;
		*head->next = NULL;
		return (*head);
	}
	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
		return (NULL);
	while (aux)
	{
		if (current_index == idx)
		{
			new_element->n = n;
			new_element->prev = aux->prev;
			new_element->prev->next = new_element;
			aux->prev = new_element;
			new_element->next = aux;
			return (new_element);
		}
		aux =  aux->next;
		current_index++;
	}
	if (current_index == idx)
	{
		new_element->n = n;
		new_element->prev = aux->prev;
		new_element->prev->next = new_element;
		aux->prev = new_element;
		new_element->next = aux;
		return (new_element);
	}
	return (NULL);
}
