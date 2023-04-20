#include "variadic_functions.h"

/**
*print_numbers - prints variable number of numbers
*@separator: Separator
*@n: Number of args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (!separator)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
		if (i < n - 1)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d\n", va_arg(args, int));
}
