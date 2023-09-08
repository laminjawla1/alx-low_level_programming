#include "hash_tables.h"

/**
* hash_table_delete - Deletes the hash table
*
* @ht: The hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cursor, *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		cursor = ht->array[i];
		while (cursor)
		{
			tmp = cursor->next;
			free(cursor->key);
			free(cursor->value);
			free(cursor);
			cursor = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
