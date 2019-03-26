#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in index
 * @head: head of the list
 * @idx: index to create the node
 * @n: data of new node
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head, *new_node;
	unsigned int iterator = 0;

	do {
		if (iterator == idx - 1 || (idx == 0 && iterator == 0))
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
				return (NULL);
			if (*head == NULL || idx == 0)
			{
				new_node->n = n;
				new_node->next = *head;
				*head = new_node;
				return (*head);
			}
			else
			{
				new_node->n = n;
				new_node->next = aux->next;
				aux->next = new_node;
				return (new_node);
			}
		}
		aux = aux->next;
		iterator++;
	} while (aux);
	return (NULL);
}
