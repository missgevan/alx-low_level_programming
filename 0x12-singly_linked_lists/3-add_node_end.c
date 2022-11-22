#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head node
 * @str: string
 *
 * Return: address of the new element otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *newnode, *temp;

	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;

	for (i = 0; str[i] != '\0'; i++)
		;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = i;
	newnode->next = NULL;

	if (temp)
		temp->next = newnode;
	else
		*head = newnode;
	return (newnode);
}
