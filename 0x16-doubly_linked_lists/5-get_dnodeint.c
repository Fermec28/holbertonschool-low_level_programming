#include "lists.h"

/**
 * get_dnodeint_at_index - get node in index
 * @head: head of the list
 * @index: idex of the node
 * Return: node at index or Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head)
	{
		if (index == current_index)
			return (head);
		head = head->next;
		current_index++;
	}
	return (NULL);
}
