/**
*reverse_array - Reverse an array of ints
*@a: An array to be reversed
*@n: Number of elements in the array
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
