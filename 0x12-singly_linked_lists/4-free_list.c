#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: list in question
 */

void free_list(list_t *head)
{
list_t *temp_node;

if (head == NULL)
{
return;
}

while (head->next != NULL)
{
temp_node = head->next;
free(head->str);
free(head);
head = temp_node;
}

free(head->str);
free(head);
}
