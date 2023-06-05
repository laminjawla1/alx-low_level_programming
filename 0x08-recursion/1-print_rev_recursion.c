#include "main.h"
/**
*_print_rev_recursion - Recursively prints a string
*In reverse order
*@s: The string to b reversed
*Return: None
*/
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
