#include <stdlib.h>
/**
*_memset - sets the bytes of s to c
*@s: buffer
*@c: data
*@size: size
*/
void _memset(void *s, int c, int size)
{
	int i;
	unsigned char *p = s;

	for (i = 0; i < size; i++)
		*p++ = (unsigned char)c;
}
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
	_memset(array, 0, nmemb * size);
	return (array);
}
