#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: head of the list
* @index: place to insert node
* @n: value of the inserted node
* Return: pointer to head of list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
listint_t *current, *new_node;
unsigned int i;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (index == 0)
{
new_node->next = *head;
*head = new_node;
return (*head);
}

current = *head;
for (i = 0; i < index - 1; i++)
{
if (current == NULL)
{
free(new_node);
return (NULL);
}
current = current->next;
}

new_node->next = current->next;
current->next = new_node;

return (*head);
}
