#include "lists.h"

/**
 * add_dnodeint_end - add node to end
 * @head: head of the list
 * @n: number
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *aux;

	new_element = malloc(sizeof(dlistint_t));
	aux = *head;
	if (!new_element)
	{
		return (NULL);
	}
	new_element->prev = NULL;
	new_element->next = NULL;
	new_element->n = n;

	if (*head == NULL)
		*head = new_element;
	else
	{
		while (aux)
		{
			if (aux->next == NULL)
			{
				aux->next = new_element;
				new_element->prev = aux;
				break;
			}
			else
			{
				aux = aux->next;
			}
		}
	}
	return (new_element);
}
