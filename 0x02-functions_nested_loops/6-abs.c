#include "main.h"

/**
*_get_sqrt - compute the sqrt of a num
*@n: the number to be calculated
*Return: the sqrt of a num
*/

int _get_sqrt(int n)
{
	int i, result;

	i = result = 1;

	if (n <= 1)
	{
		return (n);
	}
	while (result <= n)
	{
		i++;
		result = i * i;
	}
	return (i - 1);
}

/**
*_abs - get the absolute value of a number
*@n: the num to get the abs
*Return: the abs of a number
*/

int _abs(int n)
{
	return (_get_sqrt(n * n));
}
