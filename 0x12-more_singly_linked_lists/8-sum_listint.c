#include "lists.h"

/**
 * sum_listint - sum data on list
 * @head: head of the list
 * Return: the sum of that data
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	else
		return (head->n + sum_listint(head->next));
}
