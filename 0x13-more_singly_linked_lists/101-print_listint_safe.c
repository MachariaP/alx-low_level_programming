#include "lists.h"
/**
 *print_listint_safe - prints a listint_t linked list
 *@head: pointer to the first element
 *Return: number of nodes on a list
 */
void print_node(const listint_t *node)
{
    printf("[%p] %d\n", (void *)node, node->n);
}
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow_p = head, *fast_p = head;
    size_t ele = 0;
    int is_loop = 0;
    while (slow_p && fast_p && fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p)
        {
            slow_p = slow_p->next;
            is_loop = 1;
            break;
        }
    }
    while (head)
    {
        ele++;
        if (is_loop && head == slow_p)
        {
            print_node(head);
            printf("-> [%p] %d\n", (void *)head->next, head->next->n);
            exit(98);
        }
        print_node(head);
        head = head->next;
    }
    return ele;
}
