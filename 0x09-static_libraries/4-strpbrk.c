/**
*_strpbrk -  gets the length of a prefix substring
*@s: The string
*@accept: The substring
*Return: Pointer to first occurence of s in a
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);
	}
	return (0);
}
