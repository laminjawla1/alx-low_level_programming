#include <stdlib.h>
/**
*_strdup - makes a copy of str in memory
*@str: string param
*Return: Pointer to the duplicate of str
*/
char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (!str)
		return (0);

	/*get len of str*/
	i = 0, len = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	s = (char *) malloc(sizeof(char) * len + 1);
	if (!s)
		return (0);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
