/**
*_strchr - finds a char in a string
*@s: The string to be searched
*@c: Character to be looked for
*Return: Pointer to the first occurence of the char
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (&(*s));
		s++;
	}
	return (0);
}
