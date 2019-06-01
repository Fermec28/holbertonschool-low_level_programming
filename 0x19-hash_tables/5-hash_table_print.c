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
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			printf("%s'%s': '%s'", sep, aux->key, aux->value);
			sep = ",";
			aux = aux->next;
		}
	}
	printf("}\n");
}
