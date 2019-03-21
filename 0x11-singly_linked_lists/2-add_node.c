#include "lists.h"
#include <string.h>
/**
 * add_node - add node to list
 * @head: head of the list
 * @str: value
 * Return: list_list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int size = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (; new_node->str[size]; size++)
		;
	new_node->str[size] = '\0';
	new_node->len = size;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
