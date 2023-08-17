#include "lists.h"
/**
* create_node - Creates a new node
*
*@n: Value for field of the node
*
*Return: The newly created node
*/
dlistint_t *create_node(const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
/**
* add_dnodeint_end - Adds a new node at the end of the list
*
*@head: A pointer to the list
*@n: A value for the field of the newly created  node
*
*Return: A pointer to the list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *node = create_node(n);

	if (!node)
		return (NULL);
	if (!*head)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
	node->prev = tmp;
	return (*head);
}
