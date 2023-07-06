#include "main.h"

/**
*flip_bits - get how many bits to be flipped inorder to get
*from one number to the order
*
*@n: The from number
*@m: The to number
*Return: Number of bits to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, number_of_bits;

	i = BIT_OFFSET;
	number_of_bits = 0;

	while (i >= 0)
	{
		if (((n ^ m) >> i) & 1)
			number_of_bits++;
		i--;
	}
	return (number_of_bits);
}
