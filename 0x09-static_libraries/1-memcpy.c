/**
*_memcpy - copies n bytes from src into dest
*@dest: Destination
*@src: Source
*@n: nmemb
*Return: Pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
