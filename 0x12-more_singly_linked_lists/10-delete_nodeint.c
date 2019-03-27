#include "lists.h"

/**
 * delete_nodeint_at_index -
 * @head: head of list
 * @index:index to delete
 * Return: 1 if can removed -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head, *pivote;
	unsigned int iterator = 0;

	while(aux)
	{
		if (iterator == index - 1 || (index == 0 && iterator == 0))
		{
			if(index == 0)
			{
				*head = aux->next;
				free(aux);
				return (1);
			}
			else
			{
				pivote = (aux->next)->next;
				free(aux->next);
				aux->next = pivote;
				return (1);
			}
		}
		aux = aux->next;
		iterator++;
	}
	return (-1);
}
