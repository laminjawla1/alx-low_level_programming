#include <stdio.h>

/**
*main - prints combination of
*two digit numbers
*Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

