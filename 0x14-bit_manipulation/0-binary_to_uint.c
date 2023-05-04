#include "main.h"
/**
*power - finds the result of base ^ exp
*
*@base: Base
*@exp: Exponent
*Return: base ^ exp
*/
unsigned int power(int base, int exp)
{
	unsigned int p = 1;
	int i;

	for (i = 0; i < exp; i++)
		p *= base;
	return (p);
}
/**
*_strlen - gets the length of a string
*
*@b: String
*Return: len(b)
*/
unsigned int _strlen(const char *b)
{
	unsigned int cnt = 0, i = 0;

	while (b[i])
	{
		cnt++;
		i++;
	}
	return (cnt);
}
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
	unsigned int num = 0, len, j = 0, n;
	int i;

	len = _strlen(b);
	for (i = len - 1; b[i] && i >= 0; i--, j++)
	{
		n = b[i] - '0';
		if (is_num(b[i]))
			num += n * power(2, j);
		else
			return (0);
	}
	return (num);
}
