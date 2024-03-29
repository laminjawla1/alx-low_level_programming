#include "lists.h"

/**
* print_dlistint - Print the ints in a list
*
*@h: Head of the list
*
*Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
