#include <stdlib.h>

/**
*malloc_checked - allocate memory of size b
*@b: sizeof block
*Return: memory address if successful else
*exit with status code of 98
*/
void *malloc_checked(unsigned int b)
{
	void *mem_blk;

	mem_blk = malloc(b * sizeof(b));
	if (mem_blk)
		return (mem_blk);
	exit(98);
}
