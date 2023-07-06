#include "main.h"

/**
*print_binary - prints a number in binary
*
*@n: Number
*Return: void
*/
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		if (1 & (1UL << i))
			_putchar('1');
		else
			_putchar('0');
	}
}
