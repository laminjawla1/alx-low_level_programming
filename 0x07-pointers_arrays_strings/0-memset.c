/**
*_memset - sets the first n bytes of s to b
*@s: Buffer to be set
*@b: Character to be set to the bytes in buff
*@n: nmemb
*Return: Pointer the buffer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
