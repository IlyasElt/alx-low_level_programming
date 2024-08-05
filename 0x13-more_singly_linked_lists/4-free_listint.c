#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the listint_t list
 */

void free_listint(listint_t *head)
{
listint_t *tempnode;

if (head == NULL)
{
return;
}

while (head != NULL)
{
tempnode = head->next;
free(head);
head = tempnode;
}
}
