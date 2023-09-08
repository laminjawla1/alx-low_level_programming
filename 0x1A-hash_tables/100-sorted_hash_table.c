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
	return (1);
}
/**
* shash_table_get - Inserts an element into the table
*
*@ht: Hash table
*@key: Key
*
*Return: 1 or 0
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	return ("\0");
}
/**
* shash_table_print - Inserts an element into the table
*
*@ht: Hash table
*/
void shash_table_print(const shash_table_t *ht)
{

}
/**
* shash_table_print_rev - Inserts an element into the table
*
*@ht: Hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{

}
/**
* shash_table_delete - Inserts an element into the table
*
*@ht: Hash table
*/
void shash_table_delete(shash_table_t *ht)
{

}
