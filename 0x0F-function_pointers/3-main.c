#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - calculates two numbers
*
*@argc: Argument count
*@argv: Argument vector
*
*Return: (0)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
