#include "main.h"

/**
*times_table - prints the times table
*Return: void
*/

void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
	_putchar('\n');
}
