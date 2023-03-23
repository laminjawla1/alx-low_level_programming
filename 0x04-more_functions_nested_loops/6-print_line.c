#include "main.h"

/**
*print_line - prints a straight line
*using an underscore n times
*@n: How many times to print an _
*Return: Nothing
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
