#include <string.h>

/**
*_strcpy - copies a string to another
*@dest: destination
*@src: source
*Return: a pointer to the destination
*/
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0, n = strlen(src); i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
