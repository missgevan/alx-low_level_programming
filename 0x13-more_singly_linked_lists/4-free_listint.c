#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: head node
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
