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
	long a, b, c, i, sum;

	i = 0;
	a = 1;
	b = 2;
	sum = 0;

	while (i < 40)
	{
		c = a;
		a = b;
		b = c + b;
		if (a < 4000000)
		{
			sum += a;
		}
		i++;
	}
	return (sum);
}
