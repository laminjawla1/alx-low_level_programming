#include "lists.h"

/**
*sum_listint - sums the elements in a list
*@head: Head of the list
*Return: Sum of items if success else 0
*/
int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);
	for (sum = 0; head; head = head->next)
		sum += head->n;
	return (sum);
}
