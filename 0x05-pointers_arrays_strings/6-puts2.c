#include "main.h"
#include <string.h>

/**
*puts2 - prints every other character of a str
*@str: param
*Return: void
*/
void puts2(char *str)
{
	int i, n;

	for (i = 0, n = strlen(str); i < n; i++)
		if !(i % 2)
			_putchar(str[i]);
	_putchar('\n');
}
