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
	unsigned int i;
	dlistint_t *t1 = *h;
	dlistint_t *node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	node = _create_node(n);
	if (!node)
		return (NULL);
	for (i = 0; i < idx - 1 && t1; i++)
		t1 = t1->next;
	if (!t1)
	{
		free(node);
		return (NULL);
	}
	node->next = t1->next;
	t1->next->prev = node;
	t1->next = node;
	return (*h);
}
