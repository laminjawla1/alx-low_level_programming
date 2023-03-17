#include <stdio.h>
/**
*main - print numbers 0 - 9
*using ascii notation
*Return: 0
*/

int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
