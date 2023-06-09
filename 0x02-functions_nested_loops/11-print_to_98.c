#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints natural numbers
*up to 98
*@n: base
*Return: void
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
