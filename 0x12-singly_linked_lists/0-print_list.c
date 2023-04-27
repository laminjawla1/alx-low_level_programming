#include "lists.h"
/**
*print_list - prints a linkedlist
*@h: list items
*Return: len of the list
*/
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h->next)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] %s\n", "(nil)");
		h = h->next;
		cnt++;
	}
	if (h->str)
	{
		printf("[%u] %s\n", h->len, h->str);
		cnt++;
	}
	else
	{
		printf("[0] (nil)\n");
		cnt++;
	}
	return (cnt);
}
