#include "lists.h"

/**
* sum_dlistint - Sums the members of a doubly linked list
*
*@head: Head the doubly linked list
*
*Return: sum(list)
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
