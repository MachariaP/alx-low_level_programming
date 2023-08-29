#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @idx: index to insert the node
 * @num: value of the new node
 * @head: pointer to the start of the list
 * Return: pointer to the new node, NULL if failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int num)
{
	unsigned int count;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = add_nodeint(head, num);
		return (new_node);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = num;
	temp = *head;
	count = 0;
	while (count < (idx - 1))
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
/**
 * add_nodeint - Adds a new node at the beginning of the list
 * @head: pointer to the first element of the list
 * @n: number to fill the list.
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
