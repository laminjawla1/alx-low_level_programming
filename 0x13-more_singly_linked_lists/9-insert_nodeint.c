#include "lists.h"
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

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	t1 = *head;
	for (i = 0; i < idx - 1 && t1; i++)
		t1 = t1->next;
	if (!t1)
		return (NULL);
	t2 = t1->next;
	node->next = t2;
	t1->next = node;
	return (*head);
}
