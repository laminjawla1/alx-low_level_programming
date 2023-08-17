#include "lists.h"

/**
* get_dnodeint_at_index - Gets the node at the specified index
*
*@head: Head of the linked list
*@index: Specified index
*
*Return: A pointer to the head of the list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
