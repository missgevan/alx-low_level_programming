#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * In a linked list_t list
 * @h: head node
 *
 * Return: Number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
