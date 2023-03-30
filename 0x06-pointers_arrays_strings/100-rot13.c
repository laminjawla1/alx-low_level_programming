/**
*rot13 - rotate every alphabet to 13 places
*@s: String to be encrypted
*Return: Encrypted string
*/
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = ((s[i] - 'a' + 13) % 26) + 'a';
			else
				s[i] = ((s[i] - 'A' + 13) % 26) + 'A';
			i++;
		}
	}
	return (s);
}
