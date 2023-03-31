#include "main.h"
#include <stdio.h>

/**
*print_buffer - Prints buffer
*@b: The Buffer
*@size: size of the buffer
*Return: void
*/
void print_buffer(char *b, int size)
{
	int i = 0, j, k;

	i = 0;
	/*If there's nothing to be printed*/
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		/*
		*if size - i is within 0 and 9
		*get size - i else get 10
		*/
		k = ((size - i) < 10) ? size - i : 10;
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (j < k)
				printf("%02x", *(b + i + j));
			else
				printf("  ");
			if (j % 2)
			{
				printf(" ");
			}
		}
		for (j = 0; j < k; j++)
		{
			int c = *(b + i + j);

			if (c < ' ' || c > 132)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		i += 10;
	}
}

