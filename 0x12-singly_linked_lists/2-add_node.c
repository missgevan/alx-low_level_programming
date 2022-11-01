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
	size_t chars;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (chars = 0; str[chars] != '\0'; chars++)
		;

	newnode->len = chars;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
