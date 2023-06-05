#include "lists.h"

/**
*get_nodeint_at_index - gets a node at a given index
*@head: Head of the list
*@index: Index
*Return: Node if found otherwise NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; head && i <= index; i++, head = head->next)
		if (i == index)
			return (head);
	return (NULL);
}
