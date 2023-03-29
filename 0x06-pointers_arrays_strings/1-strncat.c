#include <string.h>
/**
*_strncat - concatebate the first n charaters
*to the destination string
*@dest: Destination
*@src: Source
*@n: Number of characters to copied
*Return: A pointer to the destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int len, i, j;

	len = strlen(dest);
	j = 0;
	for (i = len; j < n && *src; i++, j++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
