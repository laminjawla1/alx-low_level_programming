#include "search_algos.h"

/**
 * jump_search - Search for an element in an array
 * using the jump search algorithm
 *
 * @array: The array to search in
 * @size: The size of the array
 * @value: The value to be searched
 *
 * Return: The first index where the value is found
 * else it returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step = sqrt(size), prev = 0, next = 0;

	if (array == NULL)
		return (-1);

	while (array[next] < value && next < size)
	{
		printf("Value checked array[%ld] = [%d]\n", next, array[next]);
		prev = next;
		next += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, next);
	for (i = prev; i <= next; i++)
	{
		if (i >= size)
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
