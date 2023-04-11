#include <stdlib.h>
/**
*_strdup - makes a copy of str in memory
*@str: string param
*Return: Pointer to the duplicate of str
*/
char *_strdup(char *str)
{
	int i;
	char *s;

	if (!str)
		return (0);
	s = (char *) malloc(sizeof(str));
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
