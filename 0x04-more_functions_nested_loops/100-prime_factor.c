#include <stdio.h>

unsigned long find_largest_prime_factor(unsigned long num);
int is_prime(int n);

/**
*main - call the find_largest_prime_factor func
*with the value of number
*Return: 0
*/

int main(void)
{
	int r;
	unsigned long number;

	number = 612852475143;
	r = find_largest_prime_factor(number);

	printf("%d\n", r);
	return (0);
}

/**
*find_largest_prime_factor - find the largest
*prime factor of a number
*@num: number to be computed
*Return: prime factor
*/

unsigned long find_largest_prime_factor(unsigned long num)
{
	unsigned long i;
	int lg;

	for (i = num / 2; i >= 2; i--)
	{
		if (num % i == 0)
		{
			if (is_prime(i))
			{
				lg = i;
				break;
			}
		}
	}
	return (lg);
}

/**
*is_prime - checks if a number is prime
*@n: number to be checked
*Return: true or false
*/

int is_prime(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		for (i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
	}
	return (1);
}
