#include <stdlib.h>
/**
*_strlen - gets the length of the string s
*@s: string
*Return: length of a str
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
*string_nconcat - concatenate n bytes of s2 to s1
*@s1: string one
*@s2: string two
*@n: nmemb chars to copied
*Return: Pointer to result when successful
*else NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	int len, i, j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len = _strlen(s1);

	result = malloc((n + len) * sizeof(char) + 1);
	if (!result)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[i] = s1[i];
	for (j = 0; (unsigned int) j < n && s2[j]; i++, j++)
		result[i] = s2[j];
	result[i] = '\0';
	return (result);
}
