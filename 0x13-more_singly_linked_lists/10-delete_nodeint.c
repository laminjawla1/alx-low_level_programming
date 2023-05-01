#include "lists.h"

/**
*delete_nodeint_at_index - deletes a node at a given index
*
*@head: Head of the list
*@index: Index of the item to be deleted
*
*Return: 1 if success else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t1, *t2;
	size_t i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		t1 = *head;
		*head = (*head)->next;
		free(t1);
		t1 = NULL;
		return (1);
	}
	t1 = *head;
	for (i = 0; i < index - 1 && t1; i++)
		t1 = t1->next;
	if (!t1)
		return (-1);
	t2 = t1->next;
	if (!t2)
		return (-1);
	t1->next = t2->next;
	free(t2);
	t2 = NULL;
	return (1);
}
