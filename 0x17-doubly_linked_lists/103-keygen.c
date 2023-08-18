#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - Finds the length of a string
*
*@s: The string
*
*Return: len(s)
*/
size_t _strlen(char *s)
{
	size_t len = 0, i = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * main - A program to generate a key depending on a username for crackme5
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success else 1
 */
int main(int argc, char *argv[])
{
	size_t i, b;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}
	len = _strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	p[1] = l[(add ^ 79) & 63];
	for (i = 0, b = 1; i < len; i++)
		b *= argv[1][i];
	p[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], i = 0; i < len; i++)
		if ((char)b <= argv[1][i])
			b = argv[1][i];
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	for (b = 0, i = 0; i < len; i++)
		b += argv[1][i] * argv[1][i];
	p[4] = l[(b ^ 239) & 63];
	for (b = 0, i = 0; (char)i < argv[1][0]; i++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
