#include <stdio.h>
/**
*reverse - Reverses a string
*@a: Character array
*@n: Length
*Return: Pointer to the array
*/
char *reverse(char *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		char t = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
	return (a);
}
/**
*infinite_add - adds a long stream of int chars
*@n1: Num array 1
*@n2: Num array 2
*@r: Variable to hold the result
*@size_r: Size of the result var
*Return: Pointer to the result var
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1, len2, d1, d2, sum, carry_over = 0;

	/*Get the length of n1*/
	i = 0;
	while (n1[i])
	{
		len1++;
		i++;
	}

	/*Get the length of n2*/
	i = 0;
	while (n2[i])
	{
		len2++;
		i++;
	}

	/*Determine whether the result will fit in the res var*/
	if (len1 >= size_r || len2 >= size_r)
		return (0);

	k = 0;
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		d1 = (i >= 0) ? n1[i] - '0' : 0;
		d2 = (j >= 0) ? n2[i] - '0' : 0;

		sum = d1 + d2 + carry_over;
		r[k] = sum % 10 + '0';
		carry_over = sum / 10;
		k++;
	}
	if (carry_over > 0)
	{
		r[k] = carry_over;
		r[++k] = '\0';
	}
	else
		r[k] = '\0';
	return (reverse(r, k));
}
