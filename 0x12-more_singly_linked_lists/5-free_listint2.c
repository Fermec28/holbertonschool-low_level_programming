#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
}
