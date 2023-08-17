#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes a node at an index
*
*@head: Head of the list
*@index: Position to be deleted
*
*Return: 1 if successful else -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t1, *t2;
	size_t i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		t1 = *head;
		*head = (*head)->next;
		free(t1);
		return (1);
	}
	t1 = *head;
	for (i = index; i > 1 && t1; i--)
		t1 = t1->next;
	if (!t1)
		return (-1);
	t2 = t1->prev;
	if (!t2)
		return (-1);
	t2->next = t1->next;
	t1->next->prev = t2;
	free(t1);
	return (1);
}
