#include "lists.h"

/**
* _create_node - Creates a new node
*
*@n: Value for field of the node
*
*Return: The newly created node
*/
dlistint_t *_create_node(const int n)
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
* add_dnodeint - Insert a new node at the beginning of the list
*
*@head: Head of the list
*@n: Value to be stored in field of the created node
*
*Return: A pointer to the head of the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = _create_node(n);

	if (!node)
		return (NULL);
	if (!*head)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}
	return (*head);
}
