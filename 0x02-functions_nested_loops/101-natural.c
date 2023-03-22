#include <stdio.h>

/**
*sum_multiples - compute the sum of multiples
*of 3 and 5 below 1023
*Return: the sum
*/

int sum_multiples(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (sum);
}
