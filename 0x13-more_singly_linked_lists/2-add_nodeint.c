#include "lists.h"

/**
 * listin_t - adds a new node at the beginning of a listint_t list
 * @head: head node
 * @n: new element
 *
 * Return: Address of the new elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
