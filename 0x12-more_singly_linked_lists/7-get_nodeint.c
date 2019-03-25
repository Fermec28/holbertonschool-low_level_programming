#include "lists.h"

/**
 * get_nodeint_at_index - get node index
 * @head: Head of the list
 * @index: index to return the value
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterator = 0;

	while (head)
	{
		if (index == iterator)
			return (head);
		head = head->next;
		iterator++;
	}
	return (NULL);
}
