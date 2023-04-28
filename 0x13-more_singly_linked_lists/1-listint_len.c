#include "lists.h"

/**
*listint_len - gets the length of the list
*
*@h: Head node of the list
*Return: len(h)
*/
size_t listint_len(const listint_t *h)
{
	size_t size;

	for (size = 0; h; h = h->next)
		size++;
	return (size);
}
