#include "lists.h"

/**
*reverse_listint - reversed a linked lists
*
*@head: Head of the linked list
*
*Return: Reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	for (; *head; *head = next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}
	*head = prev;
	return (*head);
}
