#include "main.h"

/**
*print_number - prints a number
*@n: Number to be printed
*Return: void
*/

void print_number(int n)
{
	int x;

	x = n;
	if (n < 0)
	{
		x = -x;
	}
	if ((x / 10) > 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
