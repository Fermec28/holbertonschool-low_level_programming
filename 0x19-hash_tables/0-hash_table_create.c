#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of has table
 * Return: pointer to Hash Table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = calloc(sizeof(hash_table_t), 1);
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(sizeof(hash_node_t *), size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
