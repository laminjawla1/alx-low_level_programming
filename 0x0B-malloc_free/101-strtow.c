#include <stdlib.h>
#include <ctype.h>
/**
*get_n_words - get the number of words in string
*@s: string
*Return: The number of words
*/
int get_n_words(char *s)
{
	int total = 0, i;

	for (i = 0; s[i]; i++)
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			total++;
	return (total);
}
/**
*strtow - splits all words in a string
*@str: string
*Return: Pointer to the split str
*/
char **strtow(char *str)
{
	char **words;
	int n_words;

	if (!str)
		return (NULL);
	n_words = get_n_words(str);
	words = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!words)
		return (NULL);
	return (words);
}
