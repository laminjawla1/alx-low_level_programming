#include "search_algos.h"

/**
 * linear_search - Search for an element in an array
 * using the linear search algorithm
 *
 * @array: They array to search in
 * @size: The size of the array
 * @value: The value to be searched
 *
 * Return: The first index where the value is found
 * else it returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
