#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head node
 * @str: string
 *
 * Return: address of the new element otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elements;
	list_t 
