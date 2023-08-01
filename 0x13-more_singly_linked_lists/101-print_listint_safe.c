#include "lists.h"
#include <stdio.h>

/**
* print_listint_safe - Prints a listint_t linked list safely.
* @head: Pointer to the head of the list.
* Return: The total number of nodes printed.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t count = 0;

while (slow && fast && fast->next)
{
printf("%d\n", slow->n);
count++;

slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
break;
}
}

return (count);
}

