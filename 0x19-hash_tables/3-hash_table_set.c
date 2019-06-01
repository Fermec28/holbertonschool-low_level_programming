#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value
 * @key: key is the key. key can not be an empty string
 * @value: associated with the key, must be duplicated, can be an empty string
 * Return: Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL || key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = calloc(sizeof(hash_node_t), 1);
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
