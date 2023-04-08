#include <stdio.h>
/**
*get_int - converts a string to an integer
*@s: Str Param
*Return: number
*/
int get_int(char *s)
{
	int i, n = 0, sign;

	sign = (s[0] == '-') ? -1 : 1;
	for (i = 0; s[i]; i++)
		if (s[i] >= '0' && s[i] <= '9')
			n = 10 * n + (s[i] - '0');
	return (n * sign);
}
/**
*main - multiplies all the numbers passed as arguments
*and prints them
*@argc: Argument Count
*@argv: Argument vector
*Return: (0)
*/
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = get_int(argv[1]);
	n2 = get_int(argv[2]);

	printf("%d\n", n1 * n2);
	return (0);
}
