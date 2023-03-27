#include "main.h"

/**
*puts2 - prints every other character of a str
*@str: param
*Return: void
*/
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
