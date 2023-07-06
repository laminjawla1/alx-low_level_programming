#include "main.h"

/**
* count_bits - Count the number of bits in a number
*
*@n: Number
*
*Return: Number of bits in a given number
*/
int count_bits(unsigned long int n)
{
	int number_of_bits;

	for (number_of_bits = 0; n; n >>= 1)
		number_of_bits++;
	return (number_of_bits);
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
	for (i = count_bits(n) - 1; i >= 0; i--)
		((n >> i) & 1) ? _putchar('1') : _putchar('0');
}
