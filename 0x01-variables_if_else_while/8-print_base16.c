#include <stdio.h>

/**
*main - print hexa digits 0 - f
*Return: 0
*/
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c == 57)
		{
			for (char ch = 'a'; ch <= 'f'; ch++)
			{
				putchar(ch);
			}
		}
	}
	putchar('\n');

	return (0);
}
