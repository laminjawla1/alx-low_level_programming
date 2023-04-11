#include <stdlib.h>

/**
*get_len - gets the length of a string
*@s: string
*Return: len of the string in int
*/
int get_len(char *s)
{
	int i = 0, len = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
/**
*str_concat - concatenates two strings
*@s1: first param
*@s2: second param
*Return: pointer to the concatenated result
*/
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = get_len(s1);
	len2 = get_len(s2);

	result = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
	if (!result)
		return (0);
	for (i = 0; s1[i]; i++)
		result[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		result[i] = s2[j];
	result[i] = '\0';
	return (result);
}
