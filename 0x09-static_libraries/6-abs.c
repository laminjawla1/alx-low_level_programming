#include "main.h"

/**
*_abs - get the absolute value of a number
*@n: the num to get the abs
*Return: the abs of a number
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
