/**
*rot13 - rotate every alphabet to 13 places
*@s: String to be encrypted
*Return: Encrypted string
*/
char *rot13(char *s)
{
	char msg[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char codes[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*s)
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == msg[i])
			{
				*s = codes[i];
				break;
			}
		}
		s++;
	}
	return (s);
}
