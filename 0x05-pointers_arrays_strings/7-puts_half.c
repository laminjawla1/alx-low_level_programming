#include "main.h"
#include <string.h>

/**
*puts_half - prints half of a str
*@str: parameter
*Return: void
*/
void puts_half(char *str)
{
	int len, n;

	len = strlen(str);
	if (len % 2)
	{
		for (n = (len + 1) / 2; n < len; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = len / 2; n < len; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
