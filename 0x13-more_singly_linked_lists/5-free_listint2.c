#include "lists.h"
/**
*free_listint2 - frees the nodes of a list and sets head to NULL
*@head: Head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
