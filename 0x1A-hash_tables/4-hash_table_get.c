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
	unsigned long int index;
	hash_node_t *cursor;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	cursor = ht->array[index];
	while (cursor)
	{
		if (strcmp(cursor->key, key) == 0)
			return (cursor->value);
		cursor = cursor->next;
	}
	return (NULL);
}
