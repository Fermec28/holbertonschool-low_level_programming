#include "lists.h"

/**
 * sum_dlistint - sum values
 * @head: head of the list
 * Return: sum of the num
 */
int sum_dlistint(dlistint_t *head)
{
	if (head)
	{
		return (head->n + sum_dlistint(head->next));
	}
	else
	{
		return (0);
	}
}
