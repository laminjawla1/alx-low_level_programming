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
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
