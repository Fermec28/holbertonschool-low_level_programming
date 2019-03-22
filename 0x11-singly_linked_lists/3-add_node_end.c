#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node at the end of the list
 * @head: head of the list
 * @str: string to be copy in the new node
 * Return: addres new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int size = 0;
	char *new_str;

	if (*head == NULL || (*head)->next == NULL)
	{
		new_str = strdup(str);
		if (new_str == NULL)
			return (NULL);
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		for (; new_str[size]; size++)
			;
		new_node->str = new_str;
		new_node->len = size;
		new_node->next = NULL;
		if (*head == NULL)
			(*head) = new_node;
		else
			(*head)->next = new_node;
		return (new_node);
	}
	else
	{
		return (add_node_end((&(*head)->next), str));
	}
}
