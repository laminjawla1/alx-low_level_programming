#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the opcodes of itself
*@argc: Argument count
*@argv: Argument vector
*Return: (0)
*/
int main(int argc, char *argv[])
{
	int bytes, i;
	char *buffer;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	buffer = (char *)main;
	for (i = 0; i < bytes; i++)
		if (i < bytes - 1)
			printf("%02hhx ", buffer[i]);
		else
			printf("%02hhx\n", buffer[i]);
	return (0);
}
