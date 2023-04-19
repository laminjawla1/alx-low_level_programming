/**
*int_index - gets the index of an element return by cmp
*@array: Array
*@size: Size of the array
*@cmp: A function pointer to compare
*Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) > 0)
			return (i);
	return (-1);
}
