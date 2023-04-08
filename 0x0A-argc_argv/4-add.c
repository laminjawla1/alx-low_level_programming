#include <stdio.h>
/**
*get_int - converts a string to an integer
*@s: Str Param
*Return: number
*/
int get_int(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
		if (s[i] >= '0' && s[i] <= '9')
			n = 10 * n + (s[i] - '0');
		else
			return (-1);
	return (n);
}
/**
*main - adds all the numbers passed as arguments
*and prints them
*@argc: Argument Count
*@argv: Argument vector
*Return: (0)
*/
int main(int argc, char *argv[])
{
	int n, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (--argc > 0)
	{
		n = get_int(*++argv);
		if (n < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
