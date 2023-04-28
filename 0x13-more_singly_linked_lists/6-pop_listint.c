#include "lists.h"

/**
*pop_listint - Deletes the head node
*@head: Head of the node
*Return: Value of the deleted node
*/
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (!*head)
		return (0);
	value = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	tmp = NULL;

	return (value);
}
