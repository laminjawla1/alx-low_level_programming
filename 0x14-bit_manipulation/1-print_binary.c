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

	for (i = count_bits(n); i >= 0; i--)
		if (((unsigned char) n & (1 << (unsigned char ) i)))
			_putchar('1');
		else
			_putchar('0');
}
