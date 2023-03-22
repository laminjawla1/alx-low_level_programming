#include <stdio.h>

long calc_fib(void);

/**
 *main - call the calc_fib
*Return: 0
*/

int main(void)
{
	long fib;

	fib = calc_fib();
	printf("%ld\n", fib);
	return (0);
}

/**
*calc_fib - sum fibs
*fibonacci sequence
*Return: long result
*/

long calc_fib(void)
{
	long a, b, sum;

	a = 1;
	b = 2;
	sum = b;

	while (a + b < 4000000)
	{
		b += a;
		if (b % 2 == 0)
		{
			sum += b;
		}
		a = b - a;
	}
	return (sum);
}
