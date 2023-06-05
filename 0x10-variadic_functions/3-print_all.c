#include "variadic_functions.h"

/**
*print_all - prints all arguments passed to it
*@format: types of all the args
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";
	va_list args;

	va_start(args, format);

	if (!format)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char*);
				if (!string)
					string = "(nil)";
				printf("%s%s", separator, string);
				break;
			default:
				i++;
				continue;
		}
		i++;
		separator = ", ";
	}
	printf("\n");
	va_end(args);
}
