#include "main.h"

/**
*print_diagonal - prints a backslash
*@n: How many times to print
*Return: void
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		int i, s;

		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
