#include "main.h"

/**
*count_bits - Count the number of bits in a number
*
*@n:Number
*Return: Number of bits
*/
size_t count_bits(unsigned long int n)
{
	size_t cnt;

	for (cnt = 0; n; n >>= 1)
		cnt++;
	return (cnt);
}
/**
*get_bit - gets a bit at a specified index
*
*@n: Number
*@index: Index
*Return: bit or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
