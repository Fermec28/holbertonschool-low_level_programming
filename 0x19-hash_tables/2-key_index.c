#include "hash_tables.h"

/**
 * key_index - calculate index on hash table
 * @key: key
 * @size: size of hash table
 * Return: Return index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
