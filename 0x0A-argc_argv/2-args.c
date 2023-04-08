#include <stdio.h>
/**
*main - prints all its argument to stdou
*@argc: Argument Count
*@argv: Argument Vector
*Return: (0)
*/
int main(int argc, char *argv[])
{
	while (--argc > 0)
		printf("%s\n", *++argv);
	return (0);
}
