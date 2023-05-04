#include "main.h"
/**
*is_num - checks if a character is a number
*@c: Characer
*Return: 1 or 0
*/
int is_num(unsigned char c)
{
	return (c >= '0' && c <= '9');
}
/**
*binary_to_uint - converts a binary number to size_t
*
*@b: Binary number
*Return: Unsigned int or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (!is_num(b[i]))
			return (0);
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
