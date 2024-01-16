#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array
 * using the interpolation search algorithm
 *
 * @array: The array to search in
 * @size: The size of the array
 * @value: The value to look for
 *
 * Return: The index of the value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos;
		else
			low = pos + 1;
	}
	return (-1);

}
