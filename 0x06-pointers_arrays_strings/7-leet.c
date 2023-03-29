/**
*leet - Encrypt a string to 1337
*@s: String to encrypted
*Return: An encrypted string
*/
char *leet(char *s)
{
	int i, j, n;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	int numbers[] = {4, 3, 0, 7, 1};

	n = sizeof(letters) / sizeof(letters[0]);
	i = 0;
	while (s[i])
	{
		for (j = 0; j < n; j++)
			if (s[i] == letters[j] || s[i] - 32 == letters[j])
				s[i] = numbers[j] + '0';
		i++;
	}
	return (s);
}
