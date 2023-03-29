/**
*cap_string - converts first letter of every
*word to uppercase in a string
*@s: String to be converted
*Return: the string converted
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '.')
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
	return (s);
}
