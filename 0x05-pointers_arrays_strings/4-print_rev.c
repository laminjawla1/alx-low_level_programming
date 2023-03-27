#include "main.h"
#include <string.h>

/**
*print_rev - prints a string in reverse
*@s: string to  be printed
*Return: void
*/
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
