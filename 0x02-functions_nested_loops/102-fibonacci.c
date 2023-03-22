#include <stdio.h>

void print_fib_50(void);

/**
*main - call the print_fib_50
*Return: 0
*/

int main(void)
{
	print_fib_50();
	return (0);
}

/**
*print_fib_50 - prints the first 50
*fibonacci sequence
*Return: void
*/

void print_fib_50(void)
{
	long a, b, c, i;

	i = 0;
	a = 0;
	b = 1;

	while (i < 52)
	{
		if (i < 51)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%ld", a);
		}
		c = a;
		a = b;
		b = c + b;
		i++;
	}
	printf("\n");
}
