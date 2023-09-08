#include "hash_tables.h"

/**
*hash_table_create - Creates a hash table
*
*@size: Size of the hash table
*
*Return: An initialize hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	if (!table->array)
		return (NULL);
	return (table);
}
