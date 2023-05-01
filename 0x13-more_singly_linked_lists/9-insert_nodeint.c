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
	listint_t *tmp, *node;
	size_t i;

	node = create_node(n);
	if (!node)
		return (NULL);
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	tmp = *head;
	for (i = 0; i < idx - 1 && tmp; i++)
		tmp = tmp->next;
	if (i == idx)
		return (NULL);
	node->next = tmp->next;
	tmp->next = node;
	return (*head);
}
