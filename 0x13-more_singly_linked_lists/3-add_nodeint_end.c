#include "lists.h"
/**
*create_node - creates and fill the fields of a new node
*@n: Arg
*Return: A new node or NULL
*/
listint_t *create_node(const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	return (node);
}
/**
*add_nodeint_end - adds a new node at the front
*@head: arg1
*@n: arg2
*Return: A linked list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *node = create_node(n);

	if (!node)
		return (NULL);
	if (!*head)
		return ((*head = node));
	for (tmp = *head; tmp->next; tmp = tmp->next)
		;
	tmp->next = node;
	return (*head);
}
