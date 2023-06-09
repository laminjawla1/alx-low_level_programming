/**
*in - checks if a char is in a str
*@s: string to be searched
*@c: character to be find
*Return: 1 or 0
*/
int in(char *s, char c)
{
	int i, cnt = 0;

	for (i = 0; s[i]; i++)
		if (s[i] == c)
			cnt++;
	return (cnt);
}
/**
*_strspn -  gets the length of a prefix substring
*@s: The string
*@accept: The substring
*Return: Num of chars in accept and s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0;
	int i, n;

	for (i = 0; s[i]; i++)
	{
		n = in(accept, s[i]);
		if (n)
			cnt++;
		else
			return (cnt);
	}
	return (cnt);
}
