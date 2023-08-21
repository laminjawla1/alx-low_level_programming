/**
*_strncpy - copies at most n bytes into dest
*@dest: Destination
*@src: Source
*@n: Number of bytes
*Return: A pointer to the dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *src; i++)
	{
		dest[i] = *src;
		src++;
	}
	while (i++ < n)
		dest[i - 1] = '\0';
	return (dest);
}
