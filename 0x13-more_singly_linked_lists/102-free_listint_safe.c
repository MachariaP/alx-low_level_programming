#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *temp;

	if (!h)
		return (0);

	current = *h;
	while (current)
	{
		len++;
		if (current > current->next)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			free(current);
			break;
		}
	}
	*h = NULL;
	return (len);
}
