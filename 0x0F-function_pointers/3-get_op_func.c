#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strcmp - recursively compares two strings
*@s1: String one
*@s2: String two
*Return: (1 or 0)
*/
int _strcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	if (!*s1)
		return (1);
	return (_strcmp(s1 + 1, s2 + 1));
}
/**
*get_op_func - gets a pointer to a function indexed by s
*@s: Operator
*Return: A pointer to a function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{"*", op_mul},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (_strcmp(ops[i].op,  s))
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
