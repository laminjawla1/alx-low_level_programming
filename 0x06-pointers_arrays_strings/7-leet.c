/**
*leet - Encrypt a string to 1337
*@s: String to encrypted
*Return: An encrypted string
*/
char *leet(char *s)
{
	int i, j, n;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char codes[] = {'4', '3', '0', '7', '1'};

	n = sizeof(letters) / sizeof(letters[0]);
	i = 0;
	while (s[i])
	{
		for (j = 0; j < n; j++)
			if (s[i] == letters[j] || s[i]  == letters[j] - 32)
				s[i] = codes[j];
		i++;
	}
	return (s);
}
