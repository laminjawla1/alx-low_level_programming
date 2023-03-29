/**
*string_toupper - converts all lowercase characters
*of a string to uppercase
*@s: String to be converted
*Return: the string converted
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	return (s);
}
