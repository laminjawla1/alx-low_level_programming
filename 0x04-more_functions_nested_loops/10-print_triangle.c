#include "main.h"

/**
*print_triangle - prints a triangle
*@size: height of the triangle
*Return: void
*/

void print_triangle(int size)
{
	int i, j, s;
	
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (s = 0; s < (size - i - 1); s++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
