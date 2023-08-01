#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - pops off the head of the list and returns its contents
* @head: head of the list
* Return: contents of head
*/
int pop_listint(listint_t **head)
{
int value;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);
temp = *head;
value = temp->n;
*head = temp->next;
free(temp);
return (value);
}

