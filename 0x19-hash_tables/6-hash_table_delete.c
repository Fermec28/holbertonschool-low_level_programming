#include "hash_tables.h"

/**
 * hash_table_delete - prints a hash table.
 * @ht: hash table.
 *
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *aux;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			aux = temp;
			free(temp->key);
			free(temp->value);
			temp = temp->next;
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
