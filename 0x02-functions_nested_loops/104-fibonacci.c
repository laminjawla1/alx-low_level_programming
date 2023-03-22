#include <stdio.h>

#define FIB 98

void print_fib_98(void);

/**
*main - call the print_fib_50
*Return: 0
*/

int main(void)
{
	print_fib_98();
	return (0);
}

/**
*print_fib_98 - prints the first 98
*fibonacci sequence
*Return: void
*/

void print_fib_98(void)
{
	unsigned long a, b, c, i;

	i = 0;
	a = 1;
	b = 2;

	while (i < FIB)
	{
		if (i < FIB - 1)
		{
			printf("%lu, ", a);
		}
		else
		{
			printf("%lu", a);
		}
		c = a;
		a = b;
		b = c + b;
		i++;
	}
	printf("\n");
}
