#include <stdio.h>
#include <stdlib.h>

int get_int(char *s);
/**
*main - multiply two command-line arguments
*@argc: argument count
*@argv: argument vector
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = get_int(argv[1]);
	num2 = get_int(argv[2]);
	
	printf("%d\n", num1 * num2);
	return (0);
}
/**
*get_int - converts a string to a number
*@s: string param
*Return: Number if success else exit(98)
*/
int get_int(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = 10 * n + (s[i] - '0');
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (n);
}
