#include "main.h"

/**
*swap_int - swap two values
*@a: first parameter
*@b: second paramter
*Return: void
*/
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
