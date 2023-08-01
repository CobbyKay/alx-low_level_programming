#include <stdio.h>
#include "lists.h"

/**
* print_listint - Prints all elements of a listint_t linked list.
* @h: Pointer to the head of the list.
* Return: The number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
size_t node_count = 0; // Initialize a variable to count nodes

// Traverse the linked list
while (h != NULL)
{
printf("%d\n", h->n); // Print the current node's value
h = h->next; // Move to the next node
node_count++; // Increment the node count
}

return node_count; // Return the total number of nodes
}

