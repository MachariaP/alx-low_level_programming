#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head node
 * Returns: freed list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free (current);
		current = temp;
	}
}
