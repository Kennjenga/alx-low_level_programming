#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 * Return: (number of nodes) success
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *val = h;
    size_t count = 0;

    while (val != NULL)
    {
        printf("%d\n", val->n);
        count += 1;
        val = val->next;
    }
    return (count);
}