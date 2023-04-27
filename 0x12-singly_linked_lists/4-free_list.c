#include "lists.h"

/**
*free_list - frees nodes in a list
*@head: head of the list
*Return: void
*/
void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
