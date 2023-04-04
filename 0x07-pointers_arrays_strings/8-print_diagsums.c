#include <stdio.h>
/**
*get_first_diag - finds the sum of the
*first diagonal
*@a: Array
*@n: Size
*Return: sum of the 1st diagonal
*/
int get_first_diag(int *a, int n)
{
	int d = 0, i;

	for (i = 0; i < n; i++)
		d += a[i * n + 1];
	return (d);
}
/**
*get_second_diag - finds the sum of the
*second diagonal
*@a: Array
*@n: Size
*Return: sum of the 2nd diagonal
*/
int get_second_diag(int *a, int n)
{
	int d = 0, i;

	for (i = n - 1; i >= 0; i--)
		d += a[i * n + (n - i - 1)];
	return (d);
}
/**
*print_diagsums - prints the sum of the diagonals
*of an array
*@a: Array
*@size: Size
*/
void print_diagsums(int *a, int size)
{
	int d1 = get_first_diag(a, size);
	int d2 = get_second_diag(a, size);

	printf("%d, %d\n", d1, d2);
}
