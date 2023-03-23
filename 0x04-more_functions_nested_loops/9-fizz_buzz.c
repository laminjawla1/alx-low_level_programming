#include <stdio.h>

void one_to_100(void);
int is_multiple_of_3(int n);
int is_multiple_of_5(int n);
int is_multiple_of_3_and_5(int n);

/**
*main - call the one_to_100
*Return: 0
*/

int main(void)
{
	one_to_100();
	return (0);
}

/**
*one_to_100 - iterate from 1 to 100
*prints fizz if num is a multiple of 3
*prints buzz if num is a multiple of 5
*prints fizz buzz if num is multiple of both 5 and 3
*else prints num itsel
*Return:  void
*/

void one_to_100(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (is_multiple_of_3_and_5(i))
		{
			printf("Fizz Buzz ");
		}
		else if (is_multiple_of_3(i))
		{
			printf("Fizz ");
		}
		else if (is_multiple_of_5(i))
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

/**
*is_multiple_of_3 - checks if n
*is a multiple of 3
*@n: number to be checked
*Return: True or False
*/

int is_multiple_of_3(int n)
{
	return (n % 3 == 0);
}

/**
*is_multiple_of_5 - checks if
*n is a multiple of 5
*@n: number to be checked
*Return: true or false
*/

int is_multiple_of_5(int n)
{
	return (n % 5 == 0);
}

/**
*is_multiple_of_3_and_5 - checks if num is
*a multiple of both 3 and 5
*@n: number to be checked
*/

int is_multiple_of_3_and_5(int n)
{
	return (n % 3 == 0 && n % 5 == 0);
}
