#include <stdlib.h>
/**
*_memcpy - copy c to all the bytes in a
*@a: a dynamic 2d array
*@w: width
*@h: Height
*@c: element
*Return: void
*/
void _memcpy(int **a, int w, int h, int c)
{
	int i, j;

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			a[i][j] = c;
		}
	}
}
/**
*alloc_grid - allocate width x height memory to a
*@width: width
*@height: Height
*Return: int **
*/
int **alloc_grid(int width, int height)
{
	int **a, i;

	if (width < 1 || height < 1)
		return (NULL);
	a = malloc(sizeof(int) * (height));
	if (!a)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (!a[i])
		{
			while (i >= 0)
			{
				free(a[i]);
				i--;
			}
			free(a);
			return (NULL);
		}
	}
	_memcpy(a, width, height, 0);
	return (a);
}
