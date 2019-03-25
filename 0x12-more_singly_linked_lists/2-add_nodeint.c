#include "lists.h"

/**
 * add_nodeint - add node at the beggining of the list
 * @head: head of the list
 * @n: number to be initilialized the new node
 * Return: adrres of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
