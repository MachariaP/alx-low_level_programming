#include "lists.h"

/**
 * list-len - gets the number of elements in a linked list_t list
 * @h: is a pointer pointing the list
 *
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
