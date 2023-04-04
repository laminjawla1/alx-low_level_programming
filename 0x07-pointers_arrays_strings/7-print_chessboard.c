#include <stdio.h>
/**
*print_chessboard - prints a 2d chessboard
*@a: The board
*Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
}
