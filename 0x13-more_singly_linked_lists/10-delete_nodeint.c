#include "lists.h"
/**
 * delete_nodeint_at_index -deletes a node
 * @head: pointer to the first node
 * @idx: index to the first node
 * Return: 1 if success, - 1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *temp, *temp_addr;
	unsigned int count;

	temp = *head;
	count = 0;
	while (temp)
	{
		if (count == (idx - 1))
		{
			temp_addr = (temp->next)->next;
			free(temp->next);
			temp->next = temp_addr;
			return (1);
		}
		else if (idx == 0)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}
