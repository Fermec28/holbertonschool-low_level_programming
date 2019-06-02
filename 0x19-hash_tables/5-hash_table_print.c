#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux;
	char sep = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			if (sep)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			sep = 1;
			aux = aux->next;
		}
	}
	printf("}\n");
}
