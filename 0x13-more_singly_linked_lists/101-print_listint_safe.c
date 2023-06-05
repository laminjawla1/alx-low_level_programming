#include "lists.h"

/**
*print_listint_safe - prints the list in safe mode
*@head: Head of the list
*Return: size of the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;

	if (!head)
		return (len);
	while (head)
	{
		printf("[%p] %d\n",(void *) head, head->n);
		len++;
		head = head->next;
	}
	return (len);
}
