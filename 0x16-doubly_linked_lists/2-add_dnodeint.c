#include "lists.h"

/**
 * add_dnodeint - add node to end
 * @head: head of the list
 * @n: number
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
	{
		return (NULL);
	}
	new_element->prev = NULL;
	new_element->next = NULL;
	if (head != NULL)
		new_element->next = *head;
	new_element->n = n;
	*head = new_element;
	return (new_element);
}
