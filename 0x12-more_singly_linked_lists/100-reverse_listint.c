#include "lists.h"

/**
 * reverse_listint - reverse list
 *
 * Return: head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	if((*head) == NULL)
		return (NULL);
	else
	{
		listint_t *aux;

		aux = *head;
		*head = (*head)->next;
		aux->next = reverse_listint(head);
		*head = aux;
		return (*head);
	}
}
