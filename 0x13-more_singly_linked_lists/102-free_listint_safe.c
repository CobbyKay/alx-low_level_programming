#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list safely.
* @h: Double pointer to the head of the list.
* Return: The total number of nodes freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *temp;
size_t count = 0;

while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
count++;

if (current == *h)
{
*h = NULL;
break;
}
}

return (count);
}

