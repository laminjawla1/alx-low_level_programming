#include <stdio.h>

/**
*main - print small letters
********Return: 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');

	return (0);
}
