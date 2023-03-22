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
	int a, b, c;

	a = 0;
	b = 1;

	while (a < 1000)
	{
		printf("%d, ", a);
		c = a;
		a = b;
		b = c + b;
	}
	printf("\n");
}
