#include "lists.h"

/**
*free_list - frees nodes in a list
*@head: head of the list
*Return: void
*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
