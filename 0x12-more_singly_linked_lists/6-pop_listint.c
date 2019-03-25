#include "lists.h"

/**
 * pop_listint - pop element
 * @head: head of the list
 * Return: the head nodes data(n)
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *aux;

	if (*head != NULL)
	{
		value = (*head)->n;
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	return (value);
}
