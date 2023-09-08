#include "hash_tables.h"

/**
* shash_table_create - Creates a shash table
*
*@size: Size
*
*Return: Hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
/**
* create_node - Creates a new node
*
*@k: Key
*@v: Value
*
*Return: A new node else NULL
*/
shash_node_t *create_node(const char *k, const char *v)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(k);
	node->value = strdup(v);
	node->next = NULL;
	return (node);
}
/**
* shash_table_set - Inserts an element into the table
*
*@ht: Hash table
*@key: Key
*@value: Value
*
*Return: 1 or 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *tmp;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->snext;
	}
	node = create_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		node->sprev = tmp;
		node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = node;
		else
			tmp->snext->sprev = node;
		tmp->snext = node;
	}
	return (1);
}
/**
* shash_table_get - Gets an item from the hash table
*
*@ht: Hash table
*@key: Key
*
*Return: A value or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);
	node = ht->shead;
	while (node && strcmp(node->key, key) != 0)
		node = node->snext;
	return ((node == NULL) ? NULL : node->value);
}
/**
* shash_table_print - Prints the hash table
*
*@ht: Hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;
	node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");
	}
	printf("}\n");
}
/**
* shash_table_print_rev - Prints the hash table in reverse
*
*@ht: Hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;
	node = ht->stail;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
* shash_table_delete - Delete the hash table
*
*@ht: Hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;

	if (!ht)
		return;
	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
	free(ht->array);
	free(ht);
}
