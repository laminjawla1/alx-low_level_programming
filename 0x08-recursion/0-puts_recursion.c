#include "main.h"

/**
*_puts_recursion - Recursively prints a string
*@s: The string to be printed
*Return: None
*/
void _puts_recursion(char *s)
{
	if (!*s)
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
