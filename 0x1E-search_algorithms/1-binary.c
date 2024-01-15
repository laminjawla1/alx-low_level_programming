#include "search_algos.h"

/**
 * print_array - Prints the element of an array in between
 * start and end inclusively
 *
 * @array: An array of integers
 * @start: The start index
 * @end: The end index
 */
void print_array(int *array, int start, int end)
{
	int i;

	for (i = start; i <= end; i++)
	{
		if (i < end)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
/**
 * binary_search - Search for an element in an array
 * using the binary search algorithm
 *
 * @array: The list of numbers
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: The index of the value else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int middle;
	int start = 0;
	int end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		middle = start + (end - start) / 2;

		/*Search Interval*/
		printf("Searching in array: ");
		print_array(array, start, end);

		if (array[middle] > value)
			end = middle - 1;
		else if (array[middle] < value)
			start = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
