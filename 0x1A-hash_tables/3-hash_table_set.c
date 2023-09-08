#include "hash_tables.h"

/**
* create_node - Creates a new node
*
*@k: Key
*@v: Value
*
*Return: A new node else NULL
*/
hash_node_t *create_node(const char *k, const char *v)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(k);
	node->value = strdup(v);
	node->next = NULL;
	return (node);
}
/**
* hash_table_set - Inserts a new element into the table
*
*@ht: Hash Table
*@key: Key
*@value: Value
*
*Return: 1 on sucess else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	node = create_node(key, value);
	if (!node)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index])
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	else
		ht->array[index] = node;
	return (1);
}
