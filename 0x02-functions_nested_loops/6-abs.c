#include "main.h"

/**
*_get_sqrt - compute the sqrt of a num
*@n: the number to be calculated
*Return: the sqrt of a num
*/

int _get_sqrt(int n)
{
	float sqrt;

	for (sqrt = 0.01; sqrt * sqrt < n; sqrt += 0.01);
	return ((int) sqrt);
 
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
