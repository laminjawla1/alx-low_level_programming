#include "lists.h"

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
	size_t i = 0, len = 0;
	dlistint_t *t1 = *h;
	dlistint_t *node;

	while (t1)
	{
		len++;
		t1 = t1->next;
	}
	if (idx > len)
		return (NULL);
	t1 = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	node = _create_node(n);
	if (!node)
		return (NULL);
	while (t1)
	{
		if (i == idx - 1)
		{
			if (!t1->next)
				return (add_dnodeint_end(h, n));
			node->next = t1->next;
			node->prev = t1;
			t1->next->prev = node;
			t1->next = node;
			return (node);
		}
		t1 = t1->next;
		i++;
	}
	free(node);
	return (NULL);
}
