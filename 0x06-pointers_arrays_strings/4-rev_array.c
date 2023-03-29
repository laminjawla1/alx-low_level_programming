/**
*reverse_array - Reverse an array of ints
*@a: An array to be reversed
*@n: Number of elements in the array
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = n; i <= j / 2; i++)
	{
		if (a[i] < a[j - i - 1])
		{
			t = a[i];
			a[i] = a[j - i - 1];
			a[j - i - 1] = t;
		}
	}
}
