#include <stdio.h>

/**
*main - prints the letters of the alphabet
*in lower case and in reverse order
*Return: 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
