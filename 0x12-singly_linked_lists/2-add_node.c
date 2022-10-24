#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: head node
 * @str: string element
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	newnode->len = i;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
