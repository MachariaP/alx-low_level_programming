#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to head of a list.
 *
 * Return: Length of list (INT)
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *first_p = head ,*second_p = head;
	size_t ele = 0;
	int is_loop = 0;

	while (first_p && second_p && second_p->next)
	{
		if (!(second_p->next->next))
			break;
		first_p = first_p->next;
		second_p = second_p->next->next;
		if (first_p == second_p)
		{
			first_p = first_p->next;
			is_loop = 1;
			break;
		}
	}

	if (!is_loop)
	{
		while (head)
		{
			ele++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (ele);
	}

	while (head)
	{
		ele++;
		if (head == first_p)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
