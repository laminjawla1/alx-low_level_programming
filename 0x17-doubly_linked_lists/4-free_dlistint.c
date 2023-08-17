#include "listd.h"

/**
* free_dlistint - Frees a doubly linked list
*
*@head: Pointer to the head of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
