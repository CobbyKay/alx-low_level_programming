#include "lists.h"
/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: singly linked list
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t node_count;

for (node_count = 0; h; node_count++)
h = h->next;
return (node_count);
}
