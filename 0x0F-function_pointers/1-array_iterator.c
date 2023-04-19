#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - iterates over an array
*@array: Array
*@size: Size of an array
*@action: Action to be perform on per array element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
