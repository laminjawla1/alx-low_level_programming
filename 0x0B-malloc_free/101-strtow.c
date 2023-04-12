#include <stdlib.h>
#include <ctype.h>
/**
*_strlen - gets the length of a string
*@s: string
*Return: Len of a str
*/
int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
/**
*get_n_words - get the number of words in string
*@s: string
*Return: The number of words
*/
int get_n_words(char *s)
{
	int total = 0, i, f = 0;

	for (i = 0; s[i]; i++)
		if (s[i] == ' ')
			f = 0;
		else
			if (f == 0)
			{
				f = 1;
				total++;
			}
	return (total);
}
/**
*strtow - splits all words in a string
*@str: string
*Return: Pointer to the split str
*/
char **strtow(char *str)
{
	char **words, *tmp __attribute__((unused));
	int n_words, str_len __attribute__((unused));

	if (!str)
		return (NULL);
	str_len = _strlen(str);
	n_words = get_n_words(str);
	if (!n_words)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!words)
		return (NULL);
	return (words);
}
