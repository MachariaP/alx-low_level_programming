#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node in the list
 * Return: the head node's data (n)
 **/
int pop_listint(listint_t **head)
{
	int copy;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	copy = temp->n;
	free(temp);
	return (copy);
}
