#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);

	s = argstostr(0, NULL);
	if (s == NULL)
	{
		printf("Failed\n");
		return 1;
	}
	printf("%s\n", s);
    free(s);
    return (0);
}
