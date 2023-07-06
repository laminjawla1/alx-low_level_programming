#include "main.h"
/**
*get_bit - Gets a bit at the given index
*
*@n: Number
*@index: Index

*Return: bit or -1 if not successful
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
