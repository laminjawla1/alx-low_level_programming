#include "lists.h"

/**
*free_listint - frees a linkedlist
*@head: Head of the list
*/
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
