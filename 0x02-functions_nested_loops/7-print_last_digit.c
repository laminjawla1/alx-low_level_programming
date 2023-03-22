#include "main.h"

/**
*print_last_digit - get the last digit of num
*@n: the to get its last digit
*Return: the last digit of a num
*/

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	return (ld);
}
