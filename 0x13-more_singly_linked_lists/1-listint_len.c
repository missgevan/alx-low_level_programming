#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
