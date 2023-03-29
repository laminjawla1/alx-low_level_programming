/**
*reverse_array - Reverse an array of ints
*@a: An array to be reversed
*@n: Number of elements in the array
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = n - 1; i < j / 2; i++, j--)
	{
		if (a[i] < a[j])
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
}
