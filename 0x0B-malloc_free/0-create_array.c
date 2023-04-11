#include <stdlib.h>
/**
*create_array - create an array of size 'size'
*fills the bytes with char c
*@size: size of buffer
*@c: character to fill the buffer
*Return: a pointer to the buffer if all went well
*Return null if size < 0 and if malloc returns null
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (!size)
		return (0);
	buffer = (char *)malloc(sizeof(char) * size + 1);
	if (!buffer)
		return (0);

	for (i = 0; i < size; i++)
		buffer[i] = c;
	buffer[i] = '\0';
	return (buffer);
}
