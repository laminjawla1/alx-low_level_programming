/**
*_strcat - concatenate two strings
*@dest: Destination
*@src: Source
*Return: A pointer to the destination
*/
#include <string.h>

char *_strcat(char *dest, char *src)
{
	int i, n;

	n = strlen(dest);
	for (i = n; *src; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
