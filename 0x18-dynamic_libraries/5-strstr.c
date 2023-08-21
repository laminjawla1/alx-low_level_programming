/**
*_strstr - finds the first occurrence of the substring
*needle in the string haystack
*@haystack: The string
*@needle: The substring
*Return: Pointer to the substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] && haystack[i] == needle[i]; i++)
			;
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
