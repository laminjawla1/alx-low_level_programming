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
*argstostr - concatenates n number of strings
*@ac: first param
*@av: second param
*Return: pointer to the concatenated result
*/
char *argstostr(int ac, char **av)
{
	char *result;
	int len = 0, i, j, k;

	for (i = 0; i < ac; i++)
		len += get_len(av[i]);

	for (i = 0; i < ac; i++)
		if (av[i] == NULL || av[i] == 0)
			return (NULL);

	result = (char *)malloc(sizeof(char) * (len + ac) + 1);
	if (!result)
		return (NULL);

	for (i = 0; av[0][i]; i++)
		result[i] = av[0][i];
	result[i++] = '\n';

	k = 1;
	while (k < ac)
	{
		for (j = 0; av[k][j]; j++, i++)
			result[i] = av[k][j];
		result[i++] = '\n';
		k++;
	}
	result[i++] = '\0';
	return (result);
}
