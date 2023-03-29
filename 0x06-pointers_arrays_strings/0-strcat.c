/**
*_strcat - concatenate two strings
*@dest: Destination
*@src: Source
*Return: A pointer to the destination
*/

char *_strcat(char *dest, char *src)
{
	int i, n;

	n = 0;
	i = 0;
	while (dest[i])
	{
		n++;
		i++;
	}
	
	for (i = n; *src; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
