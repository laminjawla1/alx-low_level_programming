#include "main.h"
#include <string.h>

/**
*puts_half - prints half of a str
*@str: parameter
*Return: void
*/
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = (len - 1) / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
