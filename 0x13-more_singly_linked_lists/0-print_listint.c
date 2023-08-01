#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints all elements of a list_t list
* @h: singly linked list print
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t node_count;

for (node_count = 0; h; node_count++)
{
printf("%d\n", h->n);
h = h->next;
}
return (node_count);
}
