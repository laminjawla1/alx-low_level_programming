#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
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
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
