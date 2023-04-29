#include "lists.h"

/**
*list_size - gets the size of the list
*@h: Head of the list
*Return: len(h)
*/
size_t list_size(listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
/**
*insert_nodeint_at_index - inserts a node at a given index
*@head: Head of the list
*@idx: Index
*@n: Number
*Return: head node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t1, *t2, *node;
	size_t i;

	if (idx > list_size(*head) + 1)
		return (NULL);
	node = create_node(n);
	if (!node)
		return (NULL);
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	t1 = *head;
	for (i = 0; i < idx - 1; i++)
		t1 = t1->next;
	t2 = t1->next;
	node->next = t2;
	t1->next = node;
	return (*head);
}
