#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of list
 * @head: pointer to head node
 * @n: node to add
 * Return: address of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		perror("Memory allocation failed");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}

