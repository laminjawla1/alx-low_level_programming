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

	char *p = s;
	while (*p)
	{
		for (i = 0; i < 52; i++)
		{
			if (*p == msg[i])
			{
				*p = codes[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
