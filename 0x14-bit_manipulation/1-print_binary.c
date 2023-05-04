#include "main.h"

/**
*count_bits - count the number of bits in a number
*
*@n: Number
*Return: Number of bits
*/
int count_bits(unsigned long int n)
{
	int cnt;

	for (cnt = 0; n; n >>= 1)
		cnt++;
	return (cnt);
}
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
		(n & (1 << i)) ? _putchar('1') : _putchar('0');
}
