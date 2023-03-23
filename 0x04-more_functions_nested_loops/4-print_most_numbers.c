#include "main.h"

/**
*print_most_numbers - print numers from 0 - 9
*except 2 and 4
*Return: Nothing
*/

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
