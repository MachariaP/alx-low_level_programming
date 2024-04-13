#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 *             Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev, i;
	listint_t *node, *node_prev;

	if (list == NULL)
		return (NULL);

	/* Calculate the jump step size as the square root of the list size */
	step = sqrt(size);
	prev = 0;
	node = list;

	/* Jump through the list until the end is reached or the next node value is greater than the value to find */
	while (node->next != NULL && node->next->n < value)
	{
		node_prev = node;
		prev = node->index;

		/* Jump to the next node */
		for (i = 0; i < step && node->next != NULL; i++)
			node = node->next;

		/* Print the current node */
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	}

	/* Print the indexes between which the value is expected to be found */
	printf("Value found between indexes [%lu] and [%lu]\n", prev, node->index);

	/* Traverse the list linearly from the previous node until the current node */
	while (node_prev != node->next)
	{
		/* Print the current node */
		printf("Value checked at index [%lu] = [%d]\n", node_prev->index, node_prev->n);

		/* If the value is found, return the node */
		if (node_prev->n == value)
			return (node_prev);

		/* Move to the next node */
		node_prev = node_prev->next;
	}

	/* If the value is not found in the entire list, return NULL */
	return (NULL);
}