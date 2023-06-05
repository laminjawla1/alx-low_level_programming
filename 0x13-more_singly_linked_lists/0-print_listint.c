#include "lists.h"

/**
*print_listint - print the elements in a lists
*
*@h: Head node of the list
*Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
