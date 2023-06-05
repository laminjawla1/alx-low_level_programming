#include "lists.h"

/**
*_strlen - finds the len of the string
*@s: string
*Return: len of the string
*/
size_t _strlen(const char *s)
{
	size_t len = 0, i = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
/**
*create_node - creates a node and populates its fields
*
*@str: Argument
*Return: A node in heap or NULL
*/
list_t *create_node(const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	return (node);
}

/**
*add_node_end - adds a node at the end of the lists
*@str: element to be added to the list
*@head: Head of the linkedlist
*Return: a list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp __attribute__((unused));

	node = create_node(str);
	if (!node)
		return (NULL);
	if (!*head)
	{
		*head = node;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = node;
	return (*head);
}
