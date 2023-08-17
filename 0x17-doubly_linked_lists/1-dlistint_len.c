#include "lists.h"

/**
* dlistint_len - Finds the length of the given list
*
*@h: Head of the list
*
*Return: len(h)
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
