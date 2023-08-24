#include "lists.h"

/**
 * print_list - Displays all elements in a linked list.
 *
 * @h: A pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    const list_t *current = h;
    size_t node_count = 0;

    
    while (current != NULL)
    {
        
        if (current->str != NULL)
        {
            printf("[%d] %s\n", current->len, current->str);
        }
        else
        {
            printf("[0] (nil)\n");
        }

        node_count++;
        current = current->next;
    }

    return node_count;
}

