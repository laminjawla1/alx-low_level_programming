#include "hash_tables.h"

/**
* hash_table_get - Gets an element from the hash table
*
*@ht: Hash Table
*@key: Key of the value
*
*Return: A value else NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;

	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	for (i = index; ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	return (NULL);
}
