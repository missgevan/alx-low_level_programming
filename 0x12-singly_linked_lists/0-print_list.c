include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head nodes
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h);
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len,
		h->str != NULL ? h->str : "(nil)");
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
