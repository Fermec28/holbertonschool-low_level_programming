#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head of the list
 * @n:  numnber to be initialized
 * Return: direccion of the new node;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *aux;

	aux = *head;
	while(aux && aux->next)
	{
		aux = aux->next;
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if(*head == NULL)
		*head = new_node;
	else
		aux->next = new_node;
	return (new_node);
}
