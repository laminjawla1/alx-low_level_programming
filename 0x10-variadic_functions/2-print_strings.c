#include "variadic_functions.h"

/**
*print_strings - prints strings
*@separator: Separator
*@n: Number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *buff = va_arg(args, char*);

		if (i < n - 1 && separator)
			if (buff)
				printf("%s%s", buff, separator);
			else
				printf("%s%s", "(nil)", separator);
		else
			if (buff)
				printf("%s", buff);
			else
				printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
