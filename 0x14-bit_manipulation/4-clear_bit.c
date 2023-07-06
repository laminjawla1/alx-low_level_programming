#include "main.h"

/**
*clear_bit - clears a bit at specified index in a number
*
*@n: Number
*@index: Index
*Return: 1 if succes else -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > BIT_OFFSET)
		return (-1);
	*n = (~(1 << index)) & *n;
	return (1);
}
