#include "hash_tables.h"

/**
* hash_table_print - Prints the hash table
*
*@ht: The hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cursor;
	unsigned long int i;
	int flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cursor = ht->array[i];
		while (cursor)
		{
			if (!flag)
				printf(", ");
			printf("'%s': '%s'", cursor->key, cursor->value);
			flag = 0;
			cursor = cursor->next;
		}
	}
	printf("}\n");
}
