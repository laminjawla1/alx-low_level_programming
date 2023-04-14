#include <stdlib.h>
/**
*_realloc - reallocate memory for ptr
*@ptr: Previous block
*@old_size: Size of previous block
*@new_size: Size of new allocated block
*Return: Pointer to new allocated block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;
	char *p;
	unsigned int i;

	if (old_size == new_size) /* no need to allocate new block */
		return (ptr);

	/**
	*if new size is 0 and ptr is not NULL free ptr
	*and return NULL because its similar to
	*a call to free(ptr)
	*/
	if (!new_size && ptr)
	{
		free(ptr);
		return (0);
	}
	/**
	*if ptr is null and new size > 0
	*allocate a block of size new_size
	*and return a pointer to it
	*/
	if (!ptr)
		return (malloc(new_size));

	tmp = malloc(new_size);	/*new block*/
	if (!tmp)
		return (tmp);
	p = ptr;
	/*we are not interested in the rest of elements*/
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			tmp[i] = p[i];

	/**we are interested in all of the elements*/
	if (old_size > new_size)
		for (i = 0; i < old_size; i++)
			tmp[i] = p[i];
	free(ptr);
	return (p);
}
