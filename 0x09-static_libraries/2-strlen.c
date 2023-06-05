#include "main.h"

/**
*_strlen - finds the length of a string
*@s: string to be counted
*Return: length of a string in int
*/
int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;

	return (p - s);
}
