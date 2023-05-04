#include "main.h"
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
