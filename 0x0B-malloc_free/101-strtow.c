#include <stdlib.h>
#include <ctype.h>
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
			if (flag == 0)
			{
				flag = 1;
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
	char **words, *tmp;
	int n_words, str_len;

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
