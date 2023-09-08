#include "hash_tables.h"

/**
* key_index - Gets the index of a key/value pair in table
*
*@key: The key of the value
*@size: Size of the table
*
*Return: The index of the key/value pair
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_key = hash_djb2(key);

	return (hashed_key % size);
}
