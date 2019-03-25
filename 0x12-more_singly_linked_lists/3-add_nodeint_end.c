#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head of the list
 * @n:  numnber to be initialized
 * Return: direccion of the new node;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		if (*head == NULL)
			*head = new_node;
		else
			(*head)->next = new_node;
		return (new_node);
	}
	else
	{
		return (add_nodeint_end(&(*head)->next, n));
	}
}
