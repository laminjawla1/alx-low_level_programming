#include <stdlib.h>
/**
*_calloc - allocates memory to nmemb of size size
*@nmemb: members
*@size: size
*Return: void *
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb < 1 || size < 1)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	return (array);
}
