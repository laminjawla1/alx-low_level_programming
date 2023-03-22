#include "main.h"

/**
*times_table - prints the times table
*@n: n times table
*Return: void
*/

void print_times_table(int n)
{
	int i, j, res;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (res > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res - (res % 10)) / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}
