#include "lists.h"

/**
 * sum_dlistint - sums of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer to head node
 * Return: sum of all data
*/

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
