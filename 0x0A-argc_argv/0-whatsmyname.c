#include <stdio.h>
/**
*main - prints the name of the program
*@argc: Argument count
*@argv: Argument Vector
*Return: (0)
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
