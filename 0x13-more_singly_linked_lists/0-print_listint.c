#include "lists.h"
#include <stdio.h>

/**
 * print_listint - traverse linked list printing each data
 * @h: points to the head
 * 
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
    const listint_t *temp;
    temp = h;
    unsigned count = 0;

    while(temp != NULL)
    {
        printf("%d\n",temp->n);
        temp = temp->next;
        count++;
    }
    return (count);
}
