#include <stdio.h>

/**
*print_array - prints the elements of an array
*@a: an array object
*@n: number of elements
*Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}		
}
