#include "main.h"

/**
*print_number - recursively prints every single digit of a num
*@n: Number to printed
*Return: void
*/
void print_number(int n)
{
	unsigned int tmp;
	
	tmp = n;
	if (n < 0)
	{
		_putchar('-');
		tmp = -n;
	}
	if (tmp / 10)
		print_number(tmp / 10);
	_putchar(tmp % 10 + '0');
}
