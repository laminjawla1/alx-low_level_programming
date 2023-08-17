#include "lists.h"

/**
* len - gets the length of the given list
*
*@h: Head of the list
*
*Return: len(h)
*/
size_t len(dlistint_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
/**
* insert_dnodeint_at_index - Inserts a node at a given position
*
*@h: Head of the list
*@idx: Position to hold the new node
*@n: New value
*
*Return: A pointer to the head of the list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node = _create_node(n);
	dlistint_t *t1 = *h;

	if (!node)
		return (NULL);
	if (idx > len(*h) - 1)
		return (NULL);
	if (idx == 0)
	{
		node->next = *h;
		if (*h)
			(*h)->prev = node;
		*h = node;
		return (*h);
	}
	for (i = 0; i < idx - 1; i++)
		t1 = t1->next;
	node->prev = t1;
	node->next = t1->next;
	if (t1->next)
		t1->next->prev = node;
	t1->next = node;
	return (*h);
}
