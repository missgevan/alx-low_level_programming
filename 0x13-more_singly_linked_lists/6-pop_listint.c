#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head node
 *
 * Return: head node’s data (n) or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *list;
	int data_n;

	if (*head == NULL)
		return (0);

	list = *head;
	data_n = (*head)->n;
	*head = (*head)->next;

	free(list);

	return (data_n);
}
