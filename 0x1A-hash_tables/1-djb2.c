#include "hash_tables.h"

/**
* hash_djb2 - hash input data, typically strings or byte arrays,
*	      into a 32-b it or 64-bit hash value.
*
*@str: String to be hashed
*
*Return: A hash code
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
